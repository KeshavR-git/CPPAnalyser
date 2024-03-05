void Capitalise(char* phrase) {

	//loop through string and find space characters

	//add the preceding index to an array

	//use a token variable = 1 to do this

	int i = 0;
	int token = 1;
	int to_capitalise[1000] = { 0 };

	while (phrase[i] != 0) {

		if (phrase[i] == 32) {
			to_capitalise[token] = i + 1;
			token++;
		}

		i++;

	}


	//loop through array and capitalise index if necessary

	//check if lies between 67 and 122 inclusive

	// if so add difference between characters

	for (int t = 0; t < token; t++) {

		int index = to_capitalise[t];

		char diff = 'A' - 'a';

		if ((phrase[index] <= 122) && (phrase[index] >= 97)) {

			phrase[index] = phrase[index] + diff;

		}

	}

}