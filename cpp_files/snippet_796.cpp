/* This function takes a single string as an input which represents a phrase 
and it captilases the first character in each word in the phrase*/
/* Author: Pranisha*/

void Capitalise(char *phrase)
{
    int i = 0;
    
    while(phrase[i] != '\0'){
        if(i==0){
            phrase[0] = toupper(phrase[0]);
        }
        else if(phrase[i-1] == ' '){
            phrase[i] = toupper(phrase[i]);
        }
        i++;
    }
}