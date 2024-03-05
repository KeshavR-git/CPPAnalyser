void Capitalise(char *phrase)
{
    for (int i=0;phrase[i]!=0;i++)
    {
        if(((int)phrase[i]<=122&&(int)phrase[i]>=97))
        {
            if((int)phrase[i-1]==32||i==0)
            {
            phrase[i]=(char)((int)phrase[i]-32);
            }
        }
    }
}