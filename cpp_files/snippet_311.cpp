void Capitalise(char* phrase) {

	int i = 0;
	char letter;

	for (i = 0; phrase[i] != 0; i++) {

		if ((phrase[i] >= 97) && (phrase[i]) <= 122) { // this scans for lower alphabet, if it is a lower alphabet
			letter = ((phrase[i]) - 32);
			phrase[i] = letter; // make it a capital alphbet
		}
	}


	for (i = 0; phrase[i] != 0; i++) {
		//if it is a capital letter... and not the first letter
		if (    ((phrase[i] >= 65) && (phrase[i] <= 90))           && (i != 0)     )       {
			// and if the letter before it is NOT SPACE...
			if (phrase[i - 1] != 32) {

					//DECAPITALISE IT
					letter = ((phrase[i]) + 32);
					phrase[i] = letter;
								
			}
		}
	}
}