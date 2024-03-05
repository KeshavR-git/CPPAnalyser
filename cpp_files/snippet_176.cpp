void MakeCap(char *phrase, int pos) {
  if (phrase[pos] >= 97 && phrase[pos] <= 122) {
    phrase[pos] = (char)(phrase[pos] - ('a' - 'A'));
  }
}

void Capitalise(char *phrase) {
  MakeCap(phrase, 0);
  int i = 1;
  while (phrase[i]) {
    if (phrase[i - 1] == ' ') {
      MakeCap(phrase, i);
    }
    i++;
  }
}