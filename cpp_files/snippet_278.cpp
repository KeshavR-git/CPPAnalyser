//function to convert from lower case to upper case if necessary
char convert(char *phrase, int index){
	if((phrase[index]>='a')&&(phrase[index]<='z')){
			phrase[index] = phrase[index] - 32;
			return phrase[index];
	}
	return phrase[index];
}

// EXERCISE 3
void Capitalise(char *phrase)
{
	int i;
	//go through string
	for(i = 0; i < strlen(phrase); i++){
		//capatilise first character
		if(i == 0){
			phrase[0] = convert(phrase, 0);
		}
		//if first letter after a space
		if(phrase[i-1]==' '){
			phrase[i] = convert(phrase, i);
		}
	}	
}