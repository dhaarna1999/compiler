#include <iostream>
#include <string.h>
#include <fstream>

using namespace std;

int main()
{

FILE *fp,*fp2;
fp=fopen("read.txt","r+");
fp2=fopen("reply2.txt","r+");
char c;
while((c=getc(fp))!=EOF)
{
if(c=='\t')
{
fputs("    ",fp2);
}
else
{fputc(c,fp2);}
}




}
