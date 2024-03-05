void Capitalise(char *phrase)
{
    int i=0;
    while (phrase[i]!='\0'){
        if(i==0&&islower(phrase[0])){
            phrase[i]=phrase[i]-32;
            }if((phrase[i])==' '&&islower(phrase[i+1])){
                phrase[i+1]=phrase[i+1]-32;
            }else{
                phrase[i]=phrase[i];
            }
            i++;
    }
}