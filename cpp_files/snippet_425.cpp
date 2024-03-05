void Capitalise(char *phrase)
{
    int length= strlen(phrase);
    int flick_switch=1;

    for(int i=0; i<length; i++) {
        if ((phrase[i]!=' ') && (flick_switch)) {
            phrase[i]= toupper(phrase[i]);
            flick_switch= 0;
        }
        else if (phrase[i]==' ')
            flick_switch= 1;
    }
}