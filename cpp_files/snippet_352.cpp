void Capitalise(char *phrase)
{
	int i;
	
	for (i = 0; phrase[i] != '\0'; i++){
		if ((i == 0) && ((phrase[i] >= 97) && (phrase[i] <= 122))){
			phrase[i] -= ('a' - 'A');
		}
	else if ((phrase[i] == ' ') && ((phrase[i+1] >= 97) && (phrase[i+1] <= 122))){
			phrase[i+1] -= ('a' - 'A');
		}
	}
	return;
}