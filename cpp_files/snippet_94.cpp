void Capitalise(char *phrase)
{
  int i;
  
  //Checks if value of first element is a lower case letter
  //If it is, then it is capitalised
  if ((phrase[0] >= 97) && (phrase[0] <= 122)) {
    phrase[0] = phrase[0] - 32;
  }

  for (i = 1; phrase[i] != 0; i++) {
    if (phrase[i] == 32) {
      if ((phrase[i+1] >= 97) && (phrase[i+1] <= 122)) {
        phrase[i+1] = phrase[i+1] - 32;
      }
    }
  }
  return;
}