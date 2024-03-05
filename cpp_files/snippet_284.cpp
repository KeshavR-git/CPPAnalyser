#include <stdio.h>
#include <string.h> 

void Capitalise (char *phrase)
{ 
	int i=0;
	int length=strlen(phrase); 

	for(i=0; i<length; i++)
	{

		if(i==0)
		{
			if(((phrase[i]<='z') && (phrase[i]>='a'))){
				phrase[i]=phrase[i]-32; 
			} 

		}
		else if(phrase[i]==' ')
		{
			i=i+1; 
			
			if((phrase[i]<='z') && (phrase[i]>='a'))
			{
				phrase[i]=phrase[i]-32; 
			}
		} else
		{
			
			if((phrase[i]<='Z') && (phrase[i]>='A')){
				phrase[i]=phrase[i]+32; 
			} 
		}
	}
	
	return;
}