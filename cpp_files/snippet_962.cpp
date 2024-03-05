void Capitalise(char *phrase){
	int length = strlen(phrase);
	if(phrase[0]>='a' && phrase[0]<='z'){
		phrase[0] = phrase[0]-32;
	}

	for(int i = 1; i < length; i++){
		if(phrase[i-1] == ' '){
			if(phrase[i]>='a' && phrase[i]<='z'){
				phrase[i] = phrase[i]-32;
			}
		}
	}
}