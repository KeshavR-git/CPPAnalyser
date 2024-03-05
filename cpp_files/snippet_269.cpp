void Helper(char* letter) {
	if (*letter <= 122 && *letter >= 97) {
		*letter -= 32;
	}
}


void Capitalise(char* phrase) {
	int i = 0;
	
	Helper(&phrase[0]);
	
	while (phrase[i]!=0) {
		if (phrase[i] == 32) {
			Helper(&phrase[i + 1]);
		}

	i++;
	}
}