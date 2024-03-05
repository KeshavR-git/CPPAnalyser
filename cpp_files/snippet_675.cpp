#include <stdio.h>
#include <string.h>
#define _CRT_SECURE_NO_WARNINGS

void MakeCap (char *phrase, int position)
{
  if (phrase[position] <= 122 && phrase[position] >= 97)
    {
      phrase[position] = (char)(phrase[position] - 'a' + 'A');
    }
}

void Capitalise (char *phrase)
{
  int i;

  i = 0;
  while (phrase[i] != '\0')
    {
      if (i == 0)
 {
   MakeCap (phrase, 0);
 }
      else if (phrase[i - 1] == ' ')
 {
   MakeCap (phrase, i);
 }
      i=i+1;
    }
}