void Capitalise(char *phrase)
{
    int i;
    int length = strlen(phrase);
    
    for (i = 0; i < length; i++) {
      
      if (i == 0) {
          if (phrase[i] >= 'a' && phrase[1] <= 'z')
               phrase[i] -= 32; }
          
      if (phrase[i] == ' ') {
           if (phrase[i + 1] >= 'a' && phrase[i- 1] <= 'z')
               phrase[i + 1] -= 32; }
    }
}