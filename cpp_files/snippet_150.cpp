/*Function takes in a string of all the letters that need to be capitalised and 
the length of an array and changes the letters to capital letters */
void capitalL (char *string, int length) {
    int i=0;
    for (i=0; i < length ; i++) {
        string [i] = string [i] - 32;
    }

}

void Capitalise (char *phrase) {

    /*Create string array that will store first letter of all the words in the 
    sentence that will be capitalised*/
    int i=1;
    int length = strlen (phrase);
    char string[100]= " ";

    /*create indices array that will store index of all the letters that will be 
    capitalised in the phrase array*/
    int indices[100] = {0};
    
    /*If the first character of the phrase array isn't a number than capitalise 
    the letter */
    if (phrase[0] >= 97 && phrase[0] <= 122){
        phrase[0] = phrase[0] - 32;
    }
   
   /*run through phrase and store all first letters of the word and thier index 
   position */
    int j =0;
    for (i=1; i<length;i++){
        if (phrase[i]>= 97 && phrase[i]<= 122 && phrase[i-1] == ' ' ){
            string[j] = phrase[i];
            indices [j] = i;
            j++;
        }
    }
    /*Call helper function capitalL to capitalise the letters*/
    capitalL(string, length);

    /*Run through the phrase and replace all the appropriate lower case letters 
    with uper case letters using the indices and string arrays*/
    int a=0;
    for (i=1 ;  i < length ; i++ ) {
        if (i == indices [a]){
        phrase [indices[a]] = string [a];
        a++;
        }
    }
}