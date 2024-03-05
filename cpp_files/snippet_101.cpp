int IsLowerCase(int i){
	if ((i >= 97) && (i <= 122)) {
		return(i - 32);
	} 
	else {
		return(i);
	}
	return(i);
}

void Capitalise(char* phrase) {
	int length = strlen(phrase);

	if (phrase[0] != 32) {
		phrase[0] = IsLowerCase(phrase[0]);
	}

	for (int i = 0; i < length; i++){

		if (phrase[i - 1] == 32) {
			phrase[i] = IsLowerCase(phrase[i]);
			}
	}
}