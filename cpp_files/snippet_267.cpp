char uppercase(char str){
    
    if(str == 'a')
    str = 'A';
    
    if(str == 'b')
    str = 'B';
    
    if(str == 'c')
    str = 'C';
    
    if(str == 'd')
    str = 'D';
    
    if(str == 'e')
    str = 'E';
    
    if(str == 'f')
    str = 'F';
    
    if(str == 'g')
    str = 'G';
    
    if(str =='h')
    str = 'H';
    
    if(str == 'i')
    str = 'I';
    
    if(str == 'j')
    str = 'J';
    
    if(str == 'k')
    str = 'K';
    
    if(str == 'l')
    str = 'L';
    
    if(str == 'm')
    str = 'M';
    
    if(str == 'n')
    str = 'N';
    
    if(str == 'o')
    str = 'O';
    
    if(str == 'p')
    str = 'P';
    
    if(str == 'q')
    str = 'Q';
    
    if(str == 'r')
    str = 'R';
    
    if(str == 's')
    str = 'S';
    
    if(str == 't')
    str = 'T';
    
    if(str == 'u')
    str = 'U';
    
    if(str == 'v')
    str = 'V';
    
    if(str == 'w')
    str = 'W';
    
    if(str == 'x')
    str = 'X';
    
    if(str == 'y')
    str = 'Y';
    
    if(str == 'z')
    str = 'Z';
    
    return str;
}

void Capitalise(char *phrase){
    int i;
    int length = (strlen(phrase)) - 1;
    
    for(i = 0; i <= length; i++){
        if (i == 0)
        phrase[i] = uppercase(phrase[i]);
        
        if (phrase[i - 1] == ' ')
        phrase[i] = uppercase(phrase[i]);
    }
}