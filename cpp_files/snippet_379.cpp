#include <stdio.h>
#include <string.h>


void Capitalise(char *phrase){
    int i, length;
    length= strlen(phrase);
    
   for (i=0; i<= length; i++){
       if ((phrase[i]>= 'a') && (phrase[i]<='z')){
           if ((i==0) || (phrase[i-1]==' ')){
               phrase[i] = phrase[i]-32;
               
           }
       }
   }
   
   
   
}