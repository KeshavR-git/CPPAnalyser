void Capitalise(char *phrase)
{
    /*
	This function capitalises the first letter of each word in a given phrase

	Author: Aileen Huang
	*/
	
	// Get length of phrase
	int phraseLen = strlen(phrase);
 	
 	for(int i=0; i<phraseLen; i++){
		if(i==0 || phrase[i-1] == ' '){
		    // If first letter of word (i.e. first character in string or after space)
		    if(phrase[i] >= 'a' && phrase[i] <= 'z'){
		        // If lowercase letter, convert to uppercase
		        phrase[i] += -'a'+'A';
		    }
		}
	}
}