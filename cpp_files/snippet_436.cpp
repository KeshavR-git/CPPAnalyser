// EXERCISE 3
void transfer(char* p, int i);
void Capitalise(char *phrase)
{
	int length = strlen(phrase), i = 0;
	transfer(phrase,0);
	for (i = 1; i < length; i++) {
		if (phrase[i - 1] == ' ') {
			transfer(phrase,i);
		}
	}
}

void transfer(char* p,int i) {
	if (('a' <= p[i]) && (p[i] <= 'z')) {
		p[i] = p[i]-('a'-'A');
	}
}