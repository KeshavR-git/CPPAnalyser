//helper function
void LowerToUpper(char *phrase, int pos)
{
    if (phrase[pos] >= 97 && phrase[pos] <= 122) {
        phrase[pos] = (char)(phrase[pos] - ('a' - 'A'));

    }

}
void Capitalise(char *phrase)
{   
    // capitalise the first letter of the phrase
    LowerToUpper(phrase, 0);
    int i = 0;
    while (phrase[i] != '\0') {
        // if there is a space detected capitalise the letter succeeding it
        if (phrase[i] == ' ') {
            LowerToUpper(phrase, i+1);
        }
        i++;
    }
}