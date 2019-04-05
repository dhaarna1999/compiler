#include <iostream>
#include <string.h>
#include <fstream>

using namespace std;

int main()
{
string s;
cin>>s;
int f=0,k=0,n=0,a=0,b=0,c=0;
for(int i=0;s[i]!='\0';i++)
{ 
if(f==0 && s[i]=='a'){a++;}
else if(f==0 && s[i]=='b'){b++;f++;}
else if(f==1 && s[i]=='b'){b++;}
else if(f==1 && s[i]=='c'){c++;f++;}
else if(f==2 && s[i]=='c'){c++;}
else {k=1;break;}
}
if(k==0 && b==a+2 && c==a*2)cout<<"string follows the pattern";
else cout<<"string doesn't follow the pattern";
}


