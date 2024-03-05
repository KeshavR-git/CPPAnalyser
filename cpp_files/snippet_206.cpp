void Capitalise(char* phrase) {
    int Wordlength = strlen(phrase);
    int Store1 = 0;
    int Store2= 0;
    int value = (int)phrase[0];
    for (int i = 0; i < Wordlength; i++) {
        Store1 = (int)phrase[i];


        if (Store1 == 32) {

            if (((int)phrase[i+1] >= 97) && ((int)phrase[i+1] <= 122)) {

                Store2 = ((int)phrase[i+1]- 32);

                phrase[i+1] = (char)Store2;

            }
        }

    }
    if ((value >= 97) && (value <= 122)) {
        phrase[0] = (char)(value - 32);


    }
    return;
}