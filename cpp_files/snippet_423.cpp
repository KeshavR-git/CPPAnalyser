/*This function capitalises valid letters in c */

void Capitalise(char *phrase){
	
	int length = strlen(phrase);
	int i;
	
	for (i=0; i<length; i++){
		
		int ascii = (int)(phrase[i]);
		/*Check if number is lowercase */
		
		if ((ascii > 96) && (ascii < 123)){
			/*Check if number should be lowercased */
			if ((i == 0) || (phrase[i - 1] == ' ')){
				ascii = ascii - 32;
				phrase[i] = (char)(ascii);
		}
		}
	
	}
}