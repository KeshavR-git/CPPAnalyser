int replaceChar(int input){
	if (input >= 97 && input <= 122) {
		return (input - 32);
	}
	else {
		return input;
	}
}
void Capitalise(char* phrase) {
	int i = 1;
	phrase[0] = replaceChar(phrase[0]);
	while (phrase[i] != '\0') {
		if (phrase[i - 1] == ' ') {
			phrase[i] = replaceChar(phrase[i]);
		}
		i++;
	}
}