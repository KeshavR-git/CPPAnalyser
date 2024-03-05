void Capitalise(char *phrase)
{	
	int length = strlen(phrase);
	for(int i=0;i< length;i++)
	{
		if (i == 0 && phrase[i]> 96 && phrase[i] < 123){
        phrase[i]= phrase[i] - 32;
    	}else if (phrase[i-1] == ' ' && phrase[i] > 96 && phrase[i] < 123){
        phrase[i]= phrase[i] - 32;
    	}
	}
}