void Capitalise(char* phrase) {
	int i = 0;
	while (phrase[i] != '\0') {
		if (i == 0) {
			if (phrase[i] >= 97 && phrase[i] <= 122) {
				phrase[0] = phrase[0] - 32;
			}
		}

		else if (phrase[i-1] == ' ') {
			if (phrase[i] >= 97 && phrase[i] <= 122){
				phrase[i] = phrase[i] - 32;
			}
		}
		
		i++;
	}
}