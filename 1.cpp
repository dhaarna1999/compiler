#include <iostream>
#include <bits/stdc++.h>
#include <math.h>
#include <time.h>
#include <unordered_map>

//I calculated average time taken by all 4 algorithms for different text pattern combinations and then plotted them using octave  .


using namespace std;



int main()
{
string text;
string pat ;
clock_t start,end;
double t1,t2,t3,t4,t5;
cout<<"enter text : ";
cin>>text;
cout<<"\nenter pattern :";
cin>>pat;

//brute force
start=clock();
cout<<"brute force : "<<endl;
int i=0,j,f,c=0;
for(i=0;i<=text.length()-pat.length();i++)
{
int k=i,j=0,f=0;
while(j<pat.length() && i<text.length())
{
if(text[k]==pat[j]){k++;j++;}
else {f=1;break;}}

if(f==0){cout<<"pattern found at "<<i+1<<endl;c=1;}

}

if(c==0)cout<<"pattern not found"<<endl;
end=clock();
t1= ((double) (end - start)) / CLOCKS_PER_SEC;
cout<<"time taken : "<<t1<<endl;


//rabin karp
start=clock();
cout<<endl<<"rabin karp:"<<endl;
int p = pat.length(); 
int t = text.length(); 
int h = 1,d=256,q=101; 

for (i = 0; i < p-1; i++){  h = (h*d)%q; }


int psum = 0;
int tsum = 0; 
f=0;
for (i = 0; i < p; i++) 
{ 
      psum = (d*psum + pat[i])%q; 
      tsum = (d*tsum + text[i])%q; 
} 
  
for (i = 0; i <= t-p; i++) 
{   if ( psum == tsum ) 
   { int k=i;
         for (j = 0; j < p; j++) 
         { 
             if (text[k] != pat[j]) break;
             else k++; 
         } 
         if (j == p){f=1;  cout<<"pattern found at "<<i+1<<endl; }
    }     
if (i!= t-p ) 
{tsum = (d*(tsum - text[i]*h) + text[i+p]);
	    tsum=tsum%q; 
            if (tsum < 0)  tsum = (tsum + q); } 
} 

if(f==0)cout<<"pattern not found" <<endl;
end=clock();
t2= ((double) (end - start)) / CLOCKS_PER_SEC;
cout<<"time taken : "<<t2<<endl;


//boyer moore
start=clock();
cout<<endl<<"boyer moore:"<<endl;
int bc[256]={-1};
f=0;

for(i=0;i<p;i++)
{
bc[pat[i]]=i;
}
i=0;
while(i<=t-p)
{
int k=i+p-1;
j=p-1;
while(j>=0 && pat[j]==text[k]){j--;k--;}

if(j<0){f=1;cout<<"pattern found at "<<i+1<<endl; i+=max(1,j-bc[text[i+j]]); }
else {i+=max(1,j-bc[text[i+j]]);}

}
if(f==0)cout<<"pattern not found"<<endl;
end=clock();
t3= ((double) (end - start)) / CLOCKS_PER_SEC;
cout<<"time taken : "<<t3<<endl;


//kmp
start=clock();
cout<<endl<<"kmp :"<<endl;
f=0;
int lps[p]={0};
i=1;
int len=0;
lps[0]=0;
while(i<p)
{
if(pat[i]==pat[len]){len++;lps[i]=len;i++;}
else if(pat[i]!=pat[len] && len>0){len=lps[len-1];}
else {lps[i]=0;i++;}
}

i=0;j=0;
while(i<t)
{

if(pat[j]==text[i]){i++;j++;}
if(j==p){f=1;cout<<"pattern found at "<<i-j+1 <<endl; j=lps[j-1];}
else if( pat[j]!=text[i]  && i<t){if(j>0)j=lps[j-1]; else i++;}

}


if(f==0)cout<<"pattern not found "<<endl;
end=clock();
t4= ((double) (end - start)) / CLOCKS_PER_SEC;
cout<<"time taken : "<<t4<<endl;


//simon
start=clock();
cout<<endl<<"simon : "<<endl;

q=INT_MIN;
//forming dfa

vector< unordered_map <char,int> > mach(p);
mach[0][pat[0]]=0;
mach[0][pat[1]]=1;
j=0;f=0;
for(i=1;i<p;i++)
{

if(i!=(p-1)) mach[i][pat[i+1]]=i+1;

if(j==INT_MIN)
{
	if(i!=(p-1) && pat[0]!=pat[i+1]) mach[i][pat[0]]=0;
	else j=0;
}
else
{	unordered_map <char,int> ::iterator r;
	for(r=mach[j].begin();r!=mach[j].end();r++){
	if(mach[i].find((*r).first)==mach[i].end())
	{mach[i][(*r).first] = (*r).second;}}
	if(i!=(p-1) && mach[j].find(pat[i+1])!=mach[j].end()) j=mach[j][pat[i+1]];
	else j=INT_MIN;	
}

}


//tracking states of dfa
for(i=0;i<t;i++){
if(q==INT_MIN){
if(text[i]==pat[0]){q=0;if(q==(p-1)) {f=1;cout << "pattern found at " << i-q+1 << endl;}}			}
else{	if(mach[q].find(text[i])!=mach[q].end()) 
	{q=mach[q][text[i]];
	if(q==(p-1)) {f=1;cout << "pattern found at " << i-q+1 << endl;}}				
else q=INT_MIN; }}

if(f==0)cout<<"pattern not found "<<endl;

end=clock();
t5= ((double) (end - start)) / CLOCKS_PER_SEC;
cout<<"time taken : "<<t5<<endl;


}
