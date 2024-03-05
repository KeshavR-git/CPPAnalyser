void Capitalise(char *phrase)
{
    int i = 0;
    int counter = 1;
    while( phrase[i] != '\0'){
        if (counter == 1 && phrase[i] < 97){
            counter = 0;
        } else if( counter == 1 && phrase[i] > 96) {
            phrase[i] -= 32;
            counter = 0;
        } else if( phrase[i] == ' '){
            counter = 1;
        }
        i++;
    }
}