void Capitalise(char* phrase) {

	int n = strlen(phrase);
	int i;

	if (phrase[0] >= 97 && phrase[0] <= 122) {
		phrase[0] = phrase[0] - 32;
	}
	for (i = 1; i < n; i++) {
		if(phrase[i]==' '){
			if (phrase[i + 1] >= 97 && phrase[i + 1] <= 122) {
				phrase[i + 1] = phrase[i + 1] - 32;
			}
		}
	}
}