void Capitalise(char *phrase){
	int i = 0;
	while (i < strlen(phrase)) {
		if (phrase[i] != ' '){
			if ((i == 0)||(phrase[i-1] == ' ')) {
				int lettercode = (int)phrase[i];
				if ((lettercode >= 97) && (lettercode <= 122)){ // if a lowercase letter
					phrase[i] = (phrase[i] - ('a' - 'A')); // only if it is the first char of the string, and not a space
				}
			}
			else if (phrase[i-1] == ' '){ // otherwise the last char has to be a space for Cap() to run
				int lettercode = (int)phrase[i];
				if ((lettercode >= 97) && (lettercode <= 122)){ // if a lowercase letter
					phrase[i] = (phrase[i] - ('a' - 'A')); // only if it is the first char of the string, and not a space
				}
			}
		}
		i++; // update
	}
}