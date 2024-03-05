void Capitalise(char *phrase){
    int a=strlen (phrase)-1;
    int i;
    
    phrase[0]=toupper(phrase[0]);
    
    for(i=0;i<=a;i++)
        if(phrase[i]==' ')
            phrase[i+1]=toupper(phrase[i+1]);
    
}