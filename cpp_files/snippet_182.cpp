void Capitalise(char* phrase) {
	int i = 1;
	int length = strlen(phrase);
	if (((phrase[0]) >= 'a') && ((phrase[0]) <= 'z')){
	(phrase[0]) = ((int)phrase[0]) - 32;
		}
	while (i < length) {
		if (((phrase[(i - 1)] == ' ') && ((phrase[i]) >= 'a')) && ((phrase[i]) <= 'z')) {
			(phrase[i]) = ((int)phrase[i]) - 32;
		}i++;
	}
}