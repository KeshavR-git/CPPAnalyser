void Capitalise(char *phrase)
{
	int lastWasChar = 0;
	for(int i = 0; i < strlen(phrase); i++) {
		if(phrase[i] != ' '){
			if(!lastWasChar){
				lastWasChar = 1;
				if(phrase[i] > 96 && phrase[i] < 123)
					phrase[i] -= 32;
			}
		}
		else
			lastWasChar = 0;

	}
}