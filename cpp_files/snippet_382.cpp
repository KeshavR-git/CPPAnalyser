void Capitalise(char* phrase)
{

    int i;
    int n;
    int pos;

    n = strlen(phrase);
    for (i = 0; i < n; i++) {


        if ((phrase[i] >= 97) && (phrase[i] <= 122)) {
            if (i == 0) {
                pos = i;
                phrase[pos] = phrase[pos] - 32;

            }


        }
    if ((phrase[i] == ' ') && (phrase[i+1] >= 97) && (phrase[i+1] <= 122)) {
        pos = i + 1;
        phrase[pos] = phrase[pos] - 32;

      }
   }
}