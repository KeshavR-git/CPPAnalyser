void Capitalise(char *phrase)
{
int i;
for(i=0; phrase[i]!='\0'; i=i+1)
    {
        if(i==0)
        {
            if((phrase[i]>='a' && phrase[i]<='z'))
                phrase[i]=phrase[i] - 32; 
            continue; 
        }
        if(phrase[i]==' ')
        {
            i=i+1;
            if(phrase[i]>='a' && phrase[i]<='z')
            {
                phrase[i]=phrase[i] - 32; 
                continue; 
            }
        }
        else
        {

            if(phrase[i]>='A' && phrase[i]<='Z')
                phrase[i]=phrase[i] + 32; 
        }
    }
    return;
}