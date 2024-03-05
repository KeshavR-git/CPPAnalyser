void Capitalise(char *phrase){
    int i=0,pos;
    while(phrase[i] != '\0'){
        if (i==0){
            pos = 0;
            if (phrase[pos]>=97 && phrase[pos]<= 122){
                phrase[pos]=(char)(phrase[pos]-('a'-'A'));
    }
        }
        else if (phrase[i-1]==' '){
                pos=i;
           if (phrase[pos]>=97 && phrase[pos]<= 122){
                phrase[pos]=(char)(phrase[pos]-('a'-'A'));
    }
        }
        i++;
    }
}