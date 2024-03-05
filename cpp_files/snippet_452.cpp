void Capitalise(char *phrase)
{
	if(phrase[0] >= 97 && phrase[0] <= 122){
		phrase[0]-=32;
	}
	
	int i=1;
	
	while(phrase[i] != '\0'){
		if(phrase[i-1] == 32){
			if(phrase[i] >= 97 && phrase[i] <=122){
				phrase[i]-=32;
			}
		}
		i++;
	}
		
}