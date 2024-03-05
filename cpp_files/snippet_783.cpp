#define _CRT_SECURE_NO_WARNINGS
 #include <stdio.h>
 #include <ctype.h>
 #include <string.h>

 void Capitalise(char *phrase)
  {
     while(*phrase) 
  {
    while (*phrase && *phrase == ' ')
      phrase++;
      *phrase = toupper(*phrase);
      phrase++;
    while (*phrase && *phrase != ' ')
      phrase++;
  }
}