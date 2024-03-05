void Capitalise(char *phrase)
{
	int i = 0;

	//Capitalise first character (if between 'a'-'z')
	if ((phrase[i] >= 97) && (phrase[i] <= 122)) {
		phrase[i] = phrase[i] - 32; 
	}

	// Capitalise character following space (if between 'a'-'z')
	while (phrase[i] != 0) {
		if ((phrase[i] == 32) && (phrase[i+1] >= 97) && (phrase[i+1] <= 122)) {
			i++;
			phrase[i] = phrase[i] - 32;
		}
		i++;
	}
}