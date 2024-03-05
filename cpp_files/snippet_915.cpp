#include <stdio.h>
#include <string.h>
#define _CRT_SECURE_NO_WARNINGS

void Capitalise(char *phrase)
{
	int i;
	
	for(i=0; phrase[i]!='\0'; i++){
	    
		if(i==0){
			if((phrase[i]>='a' && phrase[i]<='z'))
				phrase[i]=phrase[i]-32;
			continue;
		}
		
		if(phrase[i]==' '){
			
			++i;
			if(phrase[i]>='a' && phrase[i]<='z'){
				phrase[i]=phrase[i]-32; 
				continue; 
			}
		}
		
		else{
			
			if(phrase[i]>='A' && phrase[i]<='Z')
				phrase[i]=phrase[i]+32;
		}
	}
	
}