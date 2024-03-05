void Capitalise (char *phrase){
    

    char *string;
    string = &*phrase;
   
    
    int i = 1;
    
    if (string[0]>= 'a' && string[0]<='z'){
           
           string[0] = (string[0]-32);
           
       }
       
       else if (string[0]< 'a' && string[0]>'z')  {
           string[0]=string[0];
       }
       
       else{
       string[0]=string[0];
       }
    
     
    
   while (*(string + i) != '\0'){
       
      
        
        if ((((string[i]>= 'a' && string[i]<='z' )) && ((string[i-1])== ' '))) {
            
            if ((string[i-1])== 32){
            
                string[i] = (string[i]-32);
            }
            else {
                string[i]= string[i];
            }
            
            
        }
        
        else  {
            string[i]= string[i];
        }
        i++;
            }
}