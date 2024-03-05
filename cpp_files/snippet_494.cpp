void Capitalise(char *phrase)
{
	int i = 1;
	if ((phrase[0] >= 'a')&&(phrase[0]<='z')) {
		phrase[0]-=32;
	}
	while (phrase[i] != '\0') {
		if (phrase[i] == ' ') {
			if ((phrase[i+1] >= 'a')&&(phrase[i+1]<='z')){
				phrase[i+1] -=32;
			}
		}
		
		i++;
	}
}