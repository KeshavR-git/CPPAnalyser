char LetterCaseChange(int letter);
void Capitalise(char *phrase)
{
    //printf("Pre %c",phrase);
    int i=0;
    while(phrase[i]!='\0')
    {    
    int letter;
    letter = phrase[i];
    
    if (phrase[i-1]==32|| i==0)
    {
    int letter2;
    letter2 = LetterCaseChange(letter);
    phrase[i]=letter2;
    }
    //printf("Test %c",LetterCaseChange(letter));
    
    i++;
        
    }
    
    //return 0;
    
     //scanf("%s", &letter);
     //prin("%c",LetterCaseChange(letter));
     //printf("Post %c",phrase);
     
     
}

//---------------------------------------------

char LetterCaseChange(int letter)
{
    int letter1char = letter;
	if (letter1char >= 97 && letter1char <=122)
		{	
		letter1char=letter1char - 32;
		}
	return letter1char;
}