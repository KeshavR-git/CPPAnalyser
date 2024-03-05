void Capitalise(char *phrase)
{
    for(int i = 0; phrase[i] !='\0'; i++) {
        if(i==0) {
            if((phrase[i] >='a' && phrase[i] <='z')) {
                phrase[i] = phrase[i] - 32;
            }
        } if( phrase[i] ==' ') {
            i = i + 1;
            if((phrase[i] >='a' && phrase[i] <='z')) {
                phrase[i] = phrase[i] - 32;
            }
        }
    }
}