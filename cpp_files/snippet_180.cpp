// EXERCISE 3
void Capitalise(char *phrase)
{
	int Length;
	int i;
	Length = strlen(phrase);

	for (i = 0; i < Length; i++) {
		
		
		
		if (i == 0) {

			if ((phrase[i] >= 'a') && (phrase[i] <= 'z')) {
				phrase[i] = phrase[i] - 32; 
			}
		}
				
		if (phrase[i] == ' ')
		{

			i++;

			if ((phrase[i] >= 'a') && (phrase[i] <= 'z')){
				
				
				phrase[i] = phrase[i] - 32; 
				
			}
		}


	}



	return;

}