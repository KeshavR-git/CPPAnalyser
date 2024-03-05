void Capitalise(char *phrase)
{

    // Loop to the end of the phrase
    for (int i = 0; phrase[i]!=0; i++) { 
        if (i == 0 || phrase[i - 1] == ' ') { //Checks if space in front or if first index

            if (phrase[i] >= 'a' && phrase[i] <= 'z') { //Checks if it is a lower case letter (i.e. a-z)

                phrase[i] += 'A' - 'a'; //Capitalise using ASCII difference between caps and non-cap letters

            }

        }
    }
    
}