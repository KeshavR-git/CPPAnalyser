void Capitalise(char *phrase)
{
	for (int i = 0; i < strlen(phrase); i++){
		if (phrase[i] == ' ' && (int)phrase[i+1] > 96 && (int)phrase[i+1] < 173){
			phrase[i+1] -= 32;
		}
		else if (i == 0 && (int)phrase[i] > 96 && (int)phrase[i] < 173){
			phrase[i] -= 32;
		}
	}
}