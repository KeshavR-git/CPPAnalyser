void Capitalise(char *phrase)
{ 
	int i;
	for (i = 0; phrase[i] != '\0'; i++) {
		if ((!i) && (phrase[i] >= 97) && (phrase[i] <= 122)) {
			phrase[i] -= 32;
		}
		if ((phrase[i] == ' ') && (phrase[i + 1] >= 97) && (phrase[i + 1] <= 122)) {
			phrase[i + 1] -= 32;
		}
	}
}