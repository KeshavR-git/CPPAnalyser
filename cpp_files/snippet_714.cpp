void Capitalise(char *phrase)
{
    for(int i = 0; phrase[i] != '\0'; i++){
        //check first character is a lower case letter
        if(i==0){
            if((phrase[i] >= 'a' && phrase[i] <= 'z'))
                phrase[i] = phrase[i]-32; //subtract 32 to capitalize it
        continue;
        }
        if(phrase[i] >= 'a' && phrase[i] <= 'z' && phrase[i-1] == ' '){
            phrase[i] = phrase[i]-32; //subtract 32 to make it capital
            continue;
        }
        else if(phrase[i] >= 'A' && phrase[i] <= 'Z' && phrase[i-1] != ' '){
            //all other uppercase characters should be in lowercase
            phrase[i] = phrase[i]+32; //subtract 32 to make it small/lowercase
        }
    }
}