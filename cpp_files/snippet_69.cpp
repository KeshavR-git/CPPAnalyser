//Define the Capitalise function and specify the input which is the phrase
void Capitalise(char *phrase) {

    //Initialise a char array of length 26 that will contain all the lowercase letters. Also initialise the lowerCaseA integer variable, which holds the ASCII code for 'a'
    char lowerCaseAlphabet[26];
    int lowerCaseA = 97;
    int length = 0;

    //Populate the lowerCaseAlphabet array with the letters 'a' - 'z'
    for (int i = 0; i < 26; i++) {

        lowerCaseAlphabet[i] = lowerCaseA + i;
    }

    //Get the length of the input phrase
    while (phrase[length] != '\0') {
        length++;
    }

    //Iterate through the input phrase and for each character iterate through the lower case alphabet
    for (int i = 0; i < length; i++) {
        for (int j = 0; j < 26; j++) {

            /*If the current value in the phrase is a lowercase letter AND there is a space before OR the value is the first value, subtract 32 from the 
            current value to obtain the capitalalised letter */
            if ((phrase[i] == lowerCaseAlphabet[j]) && (((phrase[i - 1] == 32)) || (i == 0))) {

                phrase[i] = lowerCaseAlphabet[j] - 32;

            }
        }
    }
}