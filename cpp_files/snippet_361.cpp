void Capitalise(char *phrase) {
     int k=0;
     for ( ;*phrase;phrase++)
     if (k) {
           if (*phrase==' ')
           k=0;

     }
       else {
            if (*phrase!=' ') {

                k=1;
                *phrase=toupper(*phrase);
            }


       } 

        }