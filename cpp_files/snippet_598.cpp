#include <string.h>

void Capitalise(char *phrase){
    int i;
    for(i=0;i<strlen(phrase);i++){
        if(phrase[i]>=97&&phrase[i]<=122&&(i==0||phrase[i-1]==' ')){
            phrase[i]-=32;
        }
        
    }
}