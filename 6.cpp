#include <iostream>
#include <string.h>
#include <fstream>

using namespace std;

int main()
{
string s;
cin>>s;
int l=s.length();
int f=0;
for(int i=0;i<l;i++)
{
if(s[i]!=s[l-i-1]){f=1;break;}
}

if(f==0)cout<<"pallindrome";
else cout<<"not a pallindrome";


}


