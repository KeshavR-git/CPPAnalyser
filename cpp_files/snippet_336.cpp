void Capitalise(char* phrase)
{
	//intialises counter variable and variable to hold length of phrase
	int i;
	int length = strlen(phrase);
	//cyles throgh each phrase array element
	for (i = 0; i < length; i++) {
		//checks if element is 0, or if previous element is 0
		if ((i==0) || (phrase[i - 1] == 32)) 
		{
			//checks if current element contains a lowercase letter
			if ((phrase[i] > 96) && (phrase[i] < 123))
			{
				//converts curret element value from lowercase to uppercase
				phrase[i] -= 32;
			}
		}
	}
	return;

}