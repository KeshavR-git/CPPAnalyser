#include <stdio.h>
#include <string.h>
#include <ctype.h>


      void Capitalise(char *phrase)
 {     
     
     
      for (int i=0; i<=1000; i++){
          
         if ((phrase[i] == ' ') && (phrase[i+1] != ' '))
            {phrase[i+1] = toupper(phrase[i+1]);}
            
      }
       
     phrase[0]= toupper (phrase[0]);
 }