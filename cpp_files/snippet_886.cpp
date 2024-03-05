void Capitalise(char *phrase){
        
        int next;
        
    
    for (int i = 0; i < 100; i++) {
        
        char a = phrase[i];
        
        if(i == 0){
            next = 1;
        }
        
        if(next == 1){
            if(a == 'a'){
                phrase[i] = 'A';
            }
            if(a == 'b'){
                phrase[i] = 'B';
            }
            if(a == 'c'){
                phrase[i] = 'C';
            }
            if(a == 'd'){
                phrase[i] = 'D';
            }
            if(a == 'e'){
                phrase[i] = 'E';
            }
            if(a == 'f'){
                phrase[i] = 'F';
            }
            if(a == 'g'){
                phrase[i] = 'G';
            }
            if(a == 'h'){
                phrase[i] = 'H';
            }
            if(a == 'i'){
                phrase[i] = 'I';
            }
            if(a == 'j'){
                phrase[i] = 'J';
            }
            if(a == 'k'){
                phrase[i] = 'K';
            }
            if(a == 'l'){
                phrase[i] = 'L';
            }
            if(a == 'm'){
                phrase[i] = 'M';
            }
            if(a == 'n'){
                phrase[i] = 'N';
            }
            if(a == 'o'){
                phrase[i] = 'O';
            }
            if(a == 'p'){
                phrase[i] = 'P';
            }
            if(a == 'q'){
                phrase[i] = 'Q';
            }
            if(a == 'r'){
                phrase[i] = 'R';
            }
            if(a == 's'){
                phrase[i] = 'S';
            }
            if(a == 't'){
                phrase[i] = 'T';
            }
            if(a == 'u'){
                phrase[i] = 'U';
            }
            if(a == 'v'){
                phrase[i] = 'V';
            }
            if(a == 'w'){
                phrase[i] = 'W';
            }
            if(a == 'x'){
                phrase[i] = 'X';
            }
            if(a == 'y'){
                phrase[i] = 'Y';
            }
            if(a == 'z'){
                phrase[i] = 'Z';
            }
            
            
            next = 0;
        }
        
        if((a==' ')){

            next = 1;
        }
        
    }  
}