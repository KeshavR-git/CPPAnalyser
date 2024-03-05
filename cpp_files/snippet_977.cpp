void Capitalise(char* phrase){
    int flag=1;
    for(int i=0;*(phrase+i);i++){
        char c=*(phrase+i);
        if((!flag)&&c==' '){
            flag=1;
            continue;
        }
        if(flag&&c>='a'&&c<='z'){
            *(phrase+i)=*(phrase+i)-'a'+'A';
        }
        flag=0;
    }
}