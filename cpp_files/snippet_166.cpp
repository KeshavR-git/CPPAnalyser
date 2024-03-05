void Capitalise(char *phrase)
{
	int i,a;
	char move = 32;
	char max = 122;
	char min = 97;
	
	a = strlen(phrase);
	// Checking first one cause I couldnt be bothered finding a way to do it in the loop
	if ((phrase[0] >= min) && (phrase[0] <= max)){
		phrase[0] = phrase[0] - move;
	}
	
	for (i = 0; i < a; i++){
		if (phrase[i-1] == ' '){
			if ((phrase[i] >= min) && (phrase[i] <= max)){
				phrase[i] = phrase[i] - move;
			}
		}
	}
}