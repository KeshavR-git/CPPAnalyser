#include <ctype.h>
#include <stdio.h>
#include <string.h>
void Capitalise(char *s){
  while(*s) {
    while (*s && *s == ' ')
      s++;
    *s = toupper(*s);
    s++;
    while (*s && *s != ' ')
      s++;
  }
}