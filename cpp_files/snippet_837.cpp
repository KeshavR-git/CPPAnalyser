void Capitalise(char *phrase)
{
    int count = 0;
    int i = 0;
    int value;
    int newValue;
    int startervalue;
    int newStartervalue;
    char newCharacter;
    char startercharacter;
    
    while (phrase[i] != 0) {
        count++;
        i++;
    }

    startervalue = phrase[0];
    if ((startervalue < 123) && (startervalue > 96)) {
        newStartervalue = startervalue - 32;
        startercharacter = newStartervalue;
        phrase[0] = startercharacter;       
    }

    for (i = 0; i < count; i++) {
        if (phrase[i] == ' ') {
            value = phrase[i + 1];
            if ((value < 123) && (value > 96)) {
                newValue = value - 32;
                newCharacter = newValue;
                phrase[i+1] = newCharacter;
            }
        }
    }

}