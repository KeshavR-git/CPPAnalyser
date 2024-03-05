void Capitalise(char *phrase)
{
    int i = 1;
    
    if ((phrase[0]>96)&&(phrase[0]<123)){
            phrase[0] = phrase[0]-32;
    }

    while(phrase[i]!=0){
        if ((phrase[i]==' ')&&(phrase[i+1]>96)&&(phrase[i+1<123])){
            phrase[i+1] = phrase[i+1]-32;
        }
        i++;
    }
}