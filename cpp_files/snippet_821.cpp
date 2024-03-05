void Capitalise(char* phrase) 
{
  char reset = 1;
  for(int i = 0; phrase[i]; i++) {
    if(reset && phrase[i] >= 97 && phrase[i] <= 122) {
      phrase[i] = phrase[i] - 32;
    }
    reset = (phrase[i] == ' ');
  }
}