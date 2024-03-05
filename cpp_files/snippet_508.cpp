void Capitalise(char *phrase)
{
    int i;
    int decide=0;
    int length=strlen(phrase);
    if(length==1){
        phrase[0]=toupper(phrase[0]);
    }

    
    if ((phrase[0]>='a')&& (phrase[0<='z'])){
        phrase[0]=phrase[0]-32;
    }
    if ((phrase[0]>=49)&& (phrase[0]<=57)){
        phrase[0]=phrase[0];
    }
    for(i=1;phrase[i]!='\0';i++){
        if (phrase[i]==' '){
            decide=1;
        }
        if(decide==1){
            decide=0;
            if((phrase[i+1]>='a')&& (phrase[i+1]<='z')){
                phrase[i+1]=phrase[i+1]-32;
            }
        }
      
    }

}