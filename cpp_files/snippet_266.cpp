#include <stdio.h>
#include <string.h>
void Capitalise(char *phrase);

void Capitalise(char *phrase)
{
     int i;

     for (i = 0; phrase[i] != '\0'; i++)
     {
          if (phrase[i] >= 'a' && phrase[i] <= 'z' && (phrase[i -1] == ' ' || i == 0))
          {
               phrase[i] = phrase[i] - 32;
          }
     }
}