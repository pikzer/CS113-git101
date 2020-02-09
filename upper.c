#include <stdio.h>
#include <stdlib.h>
int main()
{
int  ref_char;
char chara[5];
ref_char = gets(chara);
ref_char = atoi(chara);
if (ref_char >= 'A' && ref_char <= 'Z')
{
printf("Output: upper case");
}
else
{
printf("Output: others");
}
}