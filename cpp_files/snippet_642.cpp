#include <stdio.h>
#include <ctype.h>
#include <string.h>

void Capitalise(char *phrase){
    for(int x=0;x<strlen(phrase);x++){
       if(x==0 && (phrase[0] >= 97 && phrase[0] <= 122)) //Conerting character at first index to uppercase.
      {
         
             phrase[x]=toupper(phrase[x]);
              
       
      }
      else if(phrase[x]==' ')//Conerting characters present after space to uppercase.
      {
          if(phrase[x+1] >= 97 && phrase[x+1] <= 122){ //ASCII - to 97 is 'a' and122 is z
            phrase[x+1]=toupper(phrase[x+1]);
          }
          
      }
    }
     
}