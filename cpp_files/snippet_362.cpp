void Capitalise(char *phrase)
{	
	int capNext = 1;
	int i = 0;
	while(phrase[i] != 0) {
		 if (phrase[i] == ' ') {
			capNext = 1;
		} else {
			if (capNext && 97 <= (int)phrase[i] && (int)phrase[i] <= 122) {
				phrase[i] = (char)(phrase[i] -32); 
			}
			capNext = 0;
		}
		i++;
	}
}