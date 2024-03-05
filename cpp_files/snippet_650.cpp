// EXERCISE 3
void Capitalise(char* phrase)
{
	int i = 0;
	while (phrase[i] != '\0') {
		i++;
	}

	int k = 0;
	

	if ((phrase[0] > 96) && (phrase[0] < 123)) {

		phrase[0] = phrase[0] - 32;
		

	}

	for (k = 0; k <= i; k++) {

		
		if ((phrase[k - 1] == ' ') && ((phrase[k] > 96) && (phrase[k] < 123))) {

			
			phrase[k] = phrase[k] - 32;
			
		}
		else {


		}

	}


}