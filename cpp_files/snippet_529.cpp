void Capitalise(char *phrase)
{
    
    int i;
    //loop to go through all the letters in the inputted string
    for(i=0; phrase[i]!='\0'; i++) //!= '0' means that this is when the loop should stop because this is when it breaks
	{
		//check first character is lowercase alphabet
		if(i==0) //if i = 0, it means that it is the first letter, so we have to make this capital
		{
			if((phrase[i]>='a' && phrase[i]<='z')) // we can treat letters as a massive number line and this is a chuck of that line
				phrase[i]=phrase[i]-32; //in this number line, we can subtract by 32, which is the amount needed to get to the capital letter
                //this is because the letter range repeats itself as a lowercase after the uppercase, so going back in the line becomes uppercase
		}
        //if there is a space on the previous letter, then it indicates a new word
		else if(phrase[i-1]==' ')
		{
			//this means that there is a new word here, so we have to make it capital
			if(phrase[i]>='a' && phrase[i]<='z')
			{
                //as done previously, we have to minus 32 to get the capital version
				phrase[i]=phrase[i]-32; 
			}
		}
		else // we have checked for a space and the first word, so now make evrythign else lowercase
		{
			if(phrase[i]>='A' && phrase[i]<='Z')
            //to do this, we do the opposite of the minus, as we are now going from capital to lowercase
				phrase[i]=phrase[i]+32; 
		}
	}
}