void Capitalise(char *phrase)
{
	for (int i = 1;i<strlen(phrase);i++)
	if ((phrase[i-1]==32)&&(phrase[i]>96)&&(phrase[i]<123)){
		phrase[i] = phrase[i]-32;
	}

	if ((phrase[0]>96)&&(phrase[0]<123)){
		phrase[0] = phrase[0]-32;
	}

}