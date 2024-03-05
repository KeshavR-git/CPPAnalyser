#include<stdio.h>

void Capitalise(char *phrase){

	int i = 0;
	while (phrase[i] != '\0'){ 
        	i++; 
	}
	
	int j;
	for(j = 0; j<i; j++){
		if ((phrase [j-1] == ' ') || (phrase [j-1] == '\0')){
			if ((phrase[j] >= 97)&&(phrase[j]<=122)){
				phrase[j] = (char)(phrase[j] - ('a'-'A'));
				}
			}
		}


}