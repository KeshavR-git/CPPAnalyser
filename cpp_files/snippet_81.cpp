void Capitalise(char* phrase)
{
	int i, length,
		boolean = 1;							// Boolean, if true, will go through the process of capitalising.	
		
	length = strlen(phrase);

	for (i = 0; i < length; i++) {
		if (phrase[i] < 'a'){					// Check for if the letter is already capitalized.
			boolean = 0;						// Makes boolean false.
		}

		if ((boolean) && (phrase[i] != ' ')){	// Check for spaces to ensure letters are capped.
			phrase[i] = phrase[i] - 32;
			boolean = 0;						// Puts boolean to false
		}

		if (phrase[i] == ' ') {					// Makes boolean true if there is a space.
			boolean = 1;
		}
	}
	return;
}