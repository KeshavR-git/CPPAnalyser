char Uppercase(char *text)
{
	text[1] = text[1] - 32;
	return text[1];
}
void Capitalise(char *phrase)
{
	char letter[2] = {'B','B'};
	
	letter[1] = phrase[0];
		if ((123>letter[1]) && (letter[1]>96)){
			phrase[0] = Uppercase(letter);
		}
			
	int i = 0;
	while(phrase[i]!=0){
		letter[0] = phrase[i];
		letter[1] = phrase[i+1];
		if (((123>letter[1]) && (letter[1]>96)) && letter[0] == 32){
			phrase[i+1] = Uppercase(letter);
		}
		i++;
	}
			
	
		
}