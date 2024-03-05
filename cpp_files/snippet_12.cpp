void Capitalise(char *phrase) {
  for (int i = 0; i < strlen(phrase); i++) {
    if (phrase[i] == ' ') {
      phrase[i+1] = toupper(phrase[i+1]);
      i++;
      continue;
    } else if (i == 0) {
      phrase[i] = toupper(phrase[i]);
    }
  }
}