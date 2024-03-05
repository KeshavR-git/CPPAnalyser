void Capitalise(char *phrase)
{
	int CharLen = strlen(phrase), Prev = 0;
	for (int i = 0; i < CharLen; i++){
		if (Prev == 0 && (phrase[i] <= 122 && phrase[i] >= 97)){
			//printf("%c\n", phrase[i]);
			phrase[i] -= 32;
			Prev = 1;
		}
		if (phrase[i] == 32){
			Prev = 0;
		}
		else{
			Prev = 1;
		}
	}
}