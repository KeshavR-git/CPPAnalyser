void Capitalise(char* phrase) {
	/*This function capitalises the first letters of every word in the string*/

	int length = strlen(phrase);
	int i = 0;

	for (i = 0; i < length; i++) {

		/*Capitalising the first letter of the string if it's a letter (between a - z) */
		if (i == 0) {
			if (phrase[i] >= 'a' && phrase[i] <= 'z') {
				phrase[i] = phrase[i] - 32;
			} 

		} 
	
	/*Otherwise, capitalising the character after a space*/
		if (phrase[i] == ' ') {

			if (phrase[i + 1] >= 'a' && phrase[i + 1] <= 'z') {
				phrase[i + 1] = phrase[i + 1] - 32;
			}

		}
	}

}