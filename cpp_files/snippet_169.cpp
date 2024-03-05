void Capitalise(char *phrase){
	
	int i = 0;
	
	if(phrase[i] >= 97){
		phrase[i] = phrase[i] - 32;
	}
	
	i++;
	
	while(phrase[i]){

		if((phrase[i - 1] == 32) && (phrase[i] >= 97)){
		phrase[i] = phrase[i] - 32;
		}
		
		i++;
	}
}