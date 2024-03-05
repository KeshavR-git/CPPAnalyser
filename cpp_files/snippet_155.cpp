void Capitalise(char *phrase) {

//setup counter i variable
int i = 0;
//check first element
if (phrase [i] >= 'a' && phrase [i] <= 'z') {
    phrase [i] = phrase [i] -32;
}
//increase i by 1
i++;


//while loop to scan input phrase until zero (end of phrase) is detected
while (phrase [i] != 0)  {
    //conditions for capitalising a character:
    //if the character is between a-z and follows a space, capitalise
    if (phrase [i-1] == ' ' && phrase [i] >= 'a' && phrase [i] <= 'z') {
        //capitalise by moving down ASCII table by 32 places
        phrase [i] = phrase [i] - 32;
        //increase i to move on
        i++; }
    //otherwise increase i to continue scan    
    else {
        i++;
    }
}//END WHILE LOOP (phrase ended)

}