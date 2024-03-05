#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
void Capitalise(char *phrase)
{
	
	int length = strlen(phrase);
	for(int i=0;i<length;i++){
		if(i==0){
			if((phrase[i]>='a') && (phrase[i]<='z')){
				phrase[i]=phrase[i] - 32;
			}else{
				phrase[i]=phrase[i];
			}
		}
		if(phrase[i] == ' '){
			i++;
			if((phrase[i]>='a') && (phrase[i]<='z')){
				phrase[i]=phrase[i] -32;
				
			}else{
				phrase[i]=phrase[i];
			}
		}
		}
	}