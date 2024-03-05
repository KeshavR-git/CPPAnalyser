void Capitalise(char* phrase){
	int i;
	i = 0;
	while (phrase[i] != '\0') {
		if (phrase[0] >= 'a' && phrase[0] <= 'z') {
			phrase[0] = phrase[0] - 32;
		}
		else if ((phrase[i] >= 'a' && phrase[i] <= 'z') && (phrase[i - 1] == ' ')) {
			phrase[i] = phrase[i] - 32;
		}
		i++;
	}


}