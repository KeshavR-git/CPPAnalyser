void Capitalise(char* phrase)
{
	int spaces[100] = { 0 };
	int i = 0;
	int phrases[100];
	
	while (i < 100) {
		phrases[i] = (int)phrase[i];
		i++;
	}

	i = 0;

	while (phrase[i] != '\0') {
		i++;
	}

	int j = 0;
	int x = 1;

	while (j != i) {
		if (phrases[j] == 32) {
			spaces[x] = j;
			x++;
		}
		j++;
	}

	if ((phrases[0] > 96) && (phrases[0] < 123)) {
		phrases[0] = phrases[0] - 32;;
	}
	x = 1;
	int n;

	while (spaces[x] != 0) {
		n = spaces[x] + 1;
		if ((phrases[n] > 96) && (phrases[n] < 123)) {
			phrases[n] = phrases[n] - 32;
		}
		x++;
	}

	i = 0;

	while (i < 100) {
		phrase[i] = (char)phrases[i];
		i++;
	}
}