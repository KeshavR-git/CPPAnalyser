void Capitalise(char* phrase)
	{
		int i = 0;
		int length = strlen(phrase);
		
		while (i < length) {
			if (i == 0 && (phrase[i] >= 97 && phrase[i] <= 122)) {
				phrase[i] = phrase[i] - 32;
				i++;
				
			}
			else{

				if ((phrase[i] > 96 && phrase[i] < 123) && (phrase[i - 1] == 32)){
					
					phrase[i] = phrase[i] - 32;
						i++;
				}
				else {
					i++;
				}
				}
				
			}
		}