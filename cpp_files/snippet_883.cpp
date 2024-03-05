char Capital(char letter) {
  char capital;
  capital = (int)letter - 32;
  return capital;
}

void Capitalise(char *phrase) {
  int length, i;
  length = strlen(phrase);
  if ((int)phrase[0] < 123 && (int)phrase[0] > 96) {
    phrase[0] = Capital(phrase[0]);
  }
  for (i = 0; i < length; i++) {
    if (phrase[i] == ' ' && (int)phrase[i+1] < 123 && (int)phrase[i+1] > 96) {
      phrase[i+1] = Capital(phrase[i+1]);
    }
  }
}