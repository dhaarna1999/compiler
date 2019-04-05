#include <iostream>
#include <string.h>
#include <fstream>

using namespace std;

int main()
{
FILE *fp,*fp2;
fp=fopen("read.txt","r+");
fp2=fopen("reply3.txt","r+");
char c;
while((c=getc(fp))!=EOF)
{
if(c=='\t' || c=='\n' || c==' ')
{
fputs("",fp2);
}
else
{fputc(c,fp2);}
}




}
