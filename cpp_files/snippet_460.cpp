void Capitalise(char *phrase)
{
	int length = strlen(phrase), i, j;
	int toCapitalise[1001] = {0};
	
	if ((phrase[0]>96)&&(phrase[0]<123)) {
		toCapitalise[0] = 1;
	}
	
	for(j = 0; j<length; j++) {
		if (phrase[j-1] == ' ') {
			toCapitalise[j] = 1;
		}
	}
	for(i = 0; i<length; i++) {
		if ((toCapitalise[i] == 1)&&(phrase[i]>96)&&(phrase[i]<123)) {
			phrase[i] = phrase[i] - 32;
		}
	}
}