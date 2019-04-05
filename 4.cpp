#include <iostream>
#include <string.h>
#include <fstream>

using namespace std;

int main()
{
FILE *fp;
fp=fopen("read.txt","r+");
char c;
int vowel=0,cons=0;
while((c=getc(fp))!=EOF)
{
if(c=='a' || c=='e'|| c=='i'|| c=='o'|| c=='u'|| c=='A'|| c=='E'|| c=='I'|| c=='O'|| c=='U')
{vowel++;}
else if(c>='a' && c<='z' || c>='A' && c<='Z')
cons++;
}

cout<<"vowel : "<<vowel<<endl<<"consonants : "<<cons<<endl;


}
