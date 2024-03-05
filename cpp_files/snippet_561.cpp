void Capital(char *phrase, int index){
	if (phrase[index] > 96 && phrase[index] < 123){
		phrase[index] = phrase[index]-32;
	}
}

void Capitalise(char *phrase)
{
	Capital(phrase,0);
	for (int i = 1; i < strlen(phrase); i++){
		if (phrase[i-1] == 32){
			Capital(phrase,i);
		}
	}
}