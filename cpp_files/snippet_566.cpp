void Capitalise(char *phrase)
{
int i;
int a = strlen(phrase);

    for(i=0;i<a;i++){
        if(i==0){
            phrase[i]=toupper(phrase[i]);
            }else if (phrase[i-1]==' '){
                phrase[i]=toupper(phrase[i]);
            }
        }
    

}