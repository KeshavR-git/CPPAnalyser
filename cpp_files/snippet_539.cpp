#include <stdio.h>
#include <string.h>

void Capitalise(char *phrase)
{
int i;
int length;
  
length = strlen(phrase);
for(i=0;i<=length;i++) {
    if(((phrase[i]<=122)&&(phrase[i]>=97)&&(phrase[i - 1]==32))||((phrase[i]<=122)&&(phrase[i]>=97)&&(i==0))) {
    phrase[i] = phrase[i] - 32;
}
}
return;
}