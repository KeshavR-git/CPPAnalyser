void Capitalise(char *phrase)
{
	int i;

	int length = strlen(phrase);


	for (i=0; i<length; i++){
		if (i == 0) {
			if ((phrase[i] >= 'a') && (phrase[i]<= 'z')) {
				phrase[i] = phrase[i] - 32;
			}

		} else if (phrase[i] == ' '){
			i++;
			if ((phrase[i] >= 'a') && (phrase[i]<= 'z')) {
				phrase[i] = phrase[i] - 32;
			}

		}else if ((phrase[i]>= 'A') && (phrase[i]<='Z')) {
				phrase[i] = phrase[i] + 32;
		}
	}
}