void Capitalise(char *phrase){
    for(int i = 0; phrase[i] !='\0'; i++)
    {
        //check first character is lowercase alphabet
        if(i == 0)
        {
            if((phrase[i] >= 'a' && phrase[i] <= 'z'))
                phrase[i]=phrase[i]-32; //subtract 32 to make it capital
            continue; //continue to the loop
        }
        if(phrase[i]==' ')//check space
        {
            
            ++i;

            if(phrase[i]>='a' && phrase[i]<='z')
            {
                phrase[i]=phrase[i]-32; //subtract 32 to make it capital
                continue; //continue to the loop
            }
        }
    }
}