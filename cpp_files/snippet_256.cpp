void CapitalHelp(char *word, int index)
{
    if((word[index]>=96) && (word[index]<=123)) {
        word[index]=word[index]-32;
    }
}

void Capitalise(char *phrase)
{
    int i=0;
    //int s=i;
    while(phrase[i]!=0){
        if(i==0){
            CapitalHelp(phrase,i);
        } else if (phrase[i]==32){
            CapitalHelp(phrase,i+1);
        }
        i++;
    }
}