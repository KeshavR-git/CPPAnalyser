void Capitalise(char *phrase){
    // change the first letter to capital
    if ((phrase[0]<123)&&(phrase[0]>96)) {
        phrase[0]=phrase[0]-32;
    }
    
    
    // for loop to check the legnth of the array, it will continue with spaces and only stops at NULL
    for (int i=0; phrase[i]!=0; i++) {
        if (phrase[i]==32) {
            if ((phrase[i+1]<123)&&(phrase[i+1]>96)) {
                phrase[i+1]=phrase[i+1]-32;
            }
        }
    }
    
    
    
    
}