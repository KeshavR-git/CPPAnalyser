void Capitalise(char* phrase) {
	int x = strlen(phrase);
	int i;
	if ((phrase[0] >= 97) && (phrase[0] <= 122)) {//if the first character is a lowercase letter, 
		phrase[0] = phrase[0] - 32;//change it to cap
	}

	for (i = 1; i <= x; i++) {//for the entire phrase after the first letter,
		if ((phrase[i] >= 97) && (phrase[i] <= 122)) {//if the letter is a lowecase, 
			if (phrase[i - 1] == 32) {// and if the character in front of the currect lowercase letter is a space,
				phrase[i] = phrase[i] - 32;//change it to a capital letter
			}
		}
	}
}