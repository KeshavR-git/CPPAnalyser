void Capitalise(char *phrase)
{
	int len = strlen(phrase);
	int i;
	
	for (i=0;i<len;i++){
		
		if((i==0 || phrase[i-1]==32) && (phrase[i]>96 && phrase[i]<123))
		
		phrase[i] -= 32;
		
	}
	
}