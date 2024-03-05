void Capitalise(char *phrase)
{
	int i=0;
	while(*(phrase+i)!='\0')
	{
		if(*(phrase+i)>='a' && *(phrase+i)<='z'){
            if(i==0){
				*(phrase+i)=*(phrase+i)-32;
			}else if (*(phrase+i-1) == ' '){
				*(phrase+i)=*(phrase+i)-32;
			} 
        }
		i++; 
	}
}