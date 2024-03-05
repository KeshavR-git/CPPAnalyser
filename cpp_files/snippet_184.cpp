void Capitalise(char *phrase)
{
    int capital = 1;
    int lower;
    while(*phrase != '\0')
    {
        lower = (*phrase>=97&&*phrase<=122);
        if(capital == 1&&lower)
        {
            *phrase -= 32;
        }
        capital = (*phrase == ' ');
        phrase++;
    }
}