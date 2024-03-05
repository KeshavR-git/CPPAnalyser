void Capitalise(char *phrase)
{
	int n = strlen(phrase);

	if ((phrase[0] >= 97) && (phrase[0] <= 122)) {

		phrase[0] -= 32;

	}

	for(int i = 1; i <= n; i++) {

		if(phrase[i - 1] == 32) {

			if ((phrase[i] >= 97) && (phrase[i] <= 122)) {
				
				phrase[i] -= 32;
				
			}
		}
	}
}