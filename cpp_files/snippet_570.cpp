void Capitalise(char *phrase)
{
int i;

    for(i = 0; (i <= strlen(phrase));i++){
        if ((phrase[i] == ' ') && (phrase[i+1] >= 'a' && phrase[i+1] <= 'z')){
            phrase[i + 1] = phrase[i + 1] - 32;
        }
        if (phrase[0] >= 'a' && phrase[0] <= 'z'){
            phrase[0] = phrase[0] - 32;
        }
        
    }
    }