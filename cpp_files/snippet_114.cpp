#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

 void Capitalise(char *phrase)
 {
     int i;
     phrase[0] = toupper(phrase[0]);

     for(i=1; i<(strlen(phrase));i++){
            if(phrase[i-1]==' ')
                phrase[i] = toupper(phrase[i]);
     }
 }