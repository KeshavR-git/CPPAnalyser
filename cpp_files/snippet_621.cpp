void Capitalise(char *phrase)
{
	int i;

	for(i=0; phrase[i] != '\0'; ++i){

		if ((i==0) && ((phrase[i]>= 'a') && (phrase[i]<='z'))) { //check to see if the first letter is capitalised
			phrase[i] = (phrase[i] - 32);
			continue;
		}

		else if ((phrase[i] == ' ') && ((phrase[i+1]>= 'a') && (phrase[i+1]<='z'))) { //if there is a space and a character following
			++i;
			phrase[i] = (phrase[i] - 32);
			continue;

		}
		else { 
			continue;
		}
	}
}