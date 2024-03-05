#include <stdio.h>
#include <string.h>

void Capitalise(char *phrase)
{
   int i=0;
   
   for(i=0;phrase[i];++i){
      if(i==0)
      {
         if(phrase[i]>='a' && phrase[i]<= 'z')
         { 
            phrase[i] = phrase[i] -32; // this will turn lower case into upper case. a = 97 and A = 65
         }
      }
      if (phrase[i-1] == ' ')
      {
         if (phrase[i] >= 'a' && phrase[i]<= 'z'){
            phrase[i] = phrase[i] - 32;
         }
      }
   }
}