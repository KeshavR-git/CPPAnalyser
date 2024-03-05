void Capitalise(char *str)
{
    for(int i=0; str[i]!='\0'; i++) {
        if(i==0) {
            if((str[i]>='a' && str[i]<='z')) {
            str[i]=str[i]-32;
            }
        }
        if(str[i]==' ') {
            i++;
            if(str[i]>='a' && str[i]<='z') {
                str[i]=str[i]-32;
            }
        }
    }
}