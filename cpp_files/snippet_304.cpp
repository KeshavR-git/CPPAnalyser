void Capitalise(char* phrase) {


	char* string;
	string = &*phrase;


	int i = 1;
	
	//if its the first letter then capatalise 
	if (string[0] >= 'a' && string[0] <= 'z') {

		string[0] = (string[0] - 32);

	}

	else if (string[0] < 'a' && string[0]>'z') {
		string[0] = string[0];//if its not from a-z then keep same
	}

	else {
		string[0] = string[0];//if its upper case then keep same 
	}
	//loops through string to look at each letter 
	while (*(string + i) != '\0') {
		//if its lowercase between a and z after a space make uppercase 
		if ((((string[i] >= 'a' && string[i] <= 'z')) && ((string[i - 1]) == ' '))) {

			if ((string[i - 1]) == 32) {

				string[i] = (string[i] - 32);
			}
			else {
				string[i] = string[i];
			}


		}
		// for All other letters keep same 
		else {
			string[i] = string[i];
		}
		i++;
	}
}