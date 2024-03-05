// This function is going to convert the first letter in every word in a sentence to an uppercase letter
// Author: James Armstrong

void Capitalise(char *phrase){
	
	 int i;
	 int length = strlen(phrase);
	 
	 // Looping through the phrase array
	 for(i = 0; i < length; i++) {
		 
		 if (i == 0 || phrase[i - 1] == ' '){ //checking if the first character is lower case
		 if (phrase[i] >= 'a' && phrase[i] <= 'z'){
			 
			 // with reference to the ASCII Table, lower case letters and upper case letters have a decimal difference of 32
			 // minus 32 to switch to an upper case
			 phrase[i] = phrase[i] - 32;
		 }
		 }
	 }
}