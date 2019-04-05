#include <iostream>
#include <string.h>
#include <fstream>

using namespace std;

int main()
{
string s;
ifstream myfile;
myfile.open("read.txt");
while(myfile)
{
getline(myfile,s);
int l=s.length();
for(int i=0;i<l;i++)
{
if(i+2<=l && s[i]=='i' && s[i+1]=='s')cout<<"is found\n";
if(i+2<=l && s[i]=='a' && s[i+1]=='m')cout<<"am found\n";
if(i+3<=l && s[i]=='a' && s[i+1]=='r' && s[i+2]=='e')cout<<"are found\n";
if(i+4<=l && s[i]=='w' && s[i+1]=='e' && s[i+2]=='r' && s[i+3]=='e')cout<<"were found\n";
if(i+3<=l && s[i]=='w' && s[i+1]=='a' && s[i+2]=='s')cout<<"was found\n";
if(i+2<=l && s[i]=='b' && s[i+1]=='e')cout<<"be found\n";
if(i+5<=l && s[i]=='b' && s[i+1]=='e' && s[i+2]=='i' && s[i+3]=='n' && s[i+4]=='g')cout<<"being found\n";
if(i+4<=l && s[i]=='b' && s[i+1]=='e' && s[i+2]=='e' && s[i+3]=='n')cout<<"been found\n";
if(i+2<=l && s[i]=='d' && s[i+1]=='o')cout<<"do found\n";
if(i+4<=l && s[i]=='d' && s[i+1]=='o' && s[i+2]=='e' && s[i+3]=='s')cout<<"does found\n";
if(i+3<=l && s[i]=='d' && s[i+1]=='i' && s[i+2]=='d' )cout<<"did found\n";
if(i+4<=l && s[i]=='w' && s[i+1]=='i' && s[i+2]=='l' && s[i+3]=='l')cout<<"will found\n";
if(i+5<=l && s[i]=='w' && s[i+1]=='o' && s[i+2]=='u' && s[i+3]=='l' && s[i+4]=='d')cout<<"would found\n";
if(i+6<=l && s[i]=='s' && s[i+1]=='h' && s[i+2]=='o' && s[i+3]=='u' && s[i+4]=='l' && s[i+5]=='d')cout<<"should found\n";
if(i+3<=l && s[i]=='c' && s[i+1]=='a' && s[i+2]=='n' )cout<<"can found\n";
if(i+5<=l && s[i]=='c' && s[i+1]=='o' && s[i+2]=='u' && s[i+3]=='l' && s[i+4]=='d')cout<<"could found\n";
if(i+3<=l && s[i]=='h' && s[i+1]=='a' && s[i+2]=='s' )cout<<"has found\n";
if(i+4<=l && s[i]=='h' && s[i+1]=='a' && s[i+2]=='v' && s[i+3]=='e' )cout<<"have found\n";
if(i+3<=l && s[i]=='h' && s[i+1]=='a' && s[i+2]=='d' )cout<<"had found\n";
if(i+2<=l && s[i]=='g' && s[i+1]=='o')cout<<"go found\n";
}
}


}


