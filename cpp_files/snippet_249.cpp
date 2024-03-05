void Capitalise(char *phrase)
{
	int len = strlen(phrase);

	for(int i=0; i <= len; i=i+1){
		if (i > 0){ // not the first character so there will be a 'space' before every letter
			if((phrase[i] <= 122) && (phrase[i] >= 97) && (phrase[i-1] == 32)){
				phrase[i] = phrase[i] - 32;
			}
		} else { // is the first character so no 'space' check relevant
			if((phrase[i] <= 122) && (phrase[i] >= 97)){
				phrase[i] = phrase[i] - 32;
			}
		}
		
	}
}