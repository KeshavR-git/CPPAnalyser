void Capitalise(char *phrase)
{
	int i;
	//run the loop until the string reaches the null character which indicates the end of code
	for (i = 0; phrase[i] != '\0'; i++) {
		if (i == 0) { //checks if first letter of string is alphabetical and changes case to capital if so
			if (phrase[i] >= 'a' && phrase[i] <= 'z') {
				phrase[i] = phrase[i] - 32;
			}
		}
		else if (phrase[i] == ' ') {//checks for space between words or numbers 
			++i; //move onto next character 
				if (phrase[i] >= 'a' && phrase[i] <= 'z') { //changes case if alphabetical
					phrase[i] = phrase[i] - 32;
				}
		}
	}
}