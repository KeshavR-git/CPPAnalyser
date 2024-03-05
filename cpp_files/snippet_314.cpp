void Capitalise(char *phrase)
{
    // Set up counter variable
    int i = 0;

    /* Because the condition for capitalising the first letter of each word is a preceding space,
    the first letter in the string wont be capitolised. So we must fix that. 
    */ 

   // Check the first character inside the string before setting up loop
   if ((phrase[i] >= 'a') && (phrase[i] <= 'z'))
   {
       // To change a lower case to capital, move down the ASCii table 32 places
       phrase[i] = (phrase[i] - 32);
   }

   // increase i by one
   i++;


   /* Now we need  a loop to bump through the string and capitalise any charecter that follows a space
    */ 
   while (phrase[i] != 0) // until 'i' reaches the terminating 0
   {
       if ((phrase[i] == ' ') && (phrase[i + 1] >= 'a') && (phrase[i + 1] <= 'z'))
       {
           phrase[i + 1] = (phrase[i + 1] - 32);

           // add to counter variable
           i++;
       }

       else
       {
           i++; // If not a preceding space, move on
       }
       
   }
}