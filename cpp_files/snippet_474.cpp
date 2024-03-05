void Cap(char *phrase, int pos){
    if (phrase[pos]>=97 && phrase[pos] <=122){
        phrase[pos] = (char)(phrase[pos]-('a' - 'A'));
    }
}

void Capitalise(char *phrase)
{
	int length = strlen(phrase);
	int i;
	Cap(phrase, 0);
	for (i=0;i<length;i++){
		if (phrase[i] == 32){
			Cap(phrase, (i+1));
		}
	}
	
}