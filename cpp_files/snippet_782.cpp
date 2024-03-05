void Capitalise(char *phrase)
{
    int i;

if ((phrase[0] >= 'a')&&(phrase[0] <= 'z'))
{
    phrase[0] = phrase[0]-32;
}
if (((phrase[0] >= 48))&&(phrase[0] <= 57))
{
    phrase[0] = phrase[0];
}
for (i = 1; phrase[i]!= '\0';i++){
    if(phrase[i] == ' '){
        if((phrase[i+1] >= 'a')&&(phrase[i+1] <= 'z'))
        phrase[i+1]=phrase[i+1]-32;

    }
}


}