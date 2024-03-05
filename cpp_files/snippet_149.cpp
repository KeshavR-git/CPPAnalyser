#include <stdio.h>
#include <string.h>

int MakeCapital (char *phrase, int index)
{
       
        phrase[index]-= 32;
        return phrase[index];
}

void Capitalise(char *phrase)
{
    int i;
    int l= (strlen(phrase)-1);
    
    if (phrase[0]>='a'){
    phrase[0]=MakeCapital (phrase, 0);
    }
    
    for (i=0; i<=l; i++){
        if ((phrase[i]==' ') && (phrase[i+1]>='a')){
            phrase[i+1]= MakeCapital (phrase, (i+1));
        }
    }
}