void Capitalise(char* phrase)
{
	int i, a, b;

	a = (int)(strlen(phrase));

	for (i = 0; i < a; i++) {
		b = phrase[i] + 0;
		if ((b >96) && (b <123)) {
			if (i == 0) {
				phrase[i] = (char)(b - 32);
			}
		}
	}
	for (i = 0; i < a; i++) {
		if (phrase[i] == ' ') {
			b = phrase[i+1] + 0;
			if ((b > 96) && (b < 123)) {
				phrase[i + 1] = (char)(phrase[i + 1] - 32);
			}
		}
	}
}