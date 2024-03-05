void Capitalise(char *phrase)
{
	//Find the position of the last letter of the character array
	int length = strlen(phrase) - 1;
	
	//Capitalising the first letter of the sentence
	if (phrase[0] >= 97) { //Checking if the letter is lowercase
		phrase[0] = phrase[0] - 32; //Capitalising the letter 
	}
	
	//For loop to cycle through each character array position 
	for (int i = 1; i <= length; i++) {
		if (phrase[i - 1] == 32) {	//Checks if position before it is a space if so
			if (phrase[i] >= 97) {	//Checking if the letter is lowercase
				phrase[i] = phrase[i] - 32;	//Capitalising the letter 
			}
		}
	}
}