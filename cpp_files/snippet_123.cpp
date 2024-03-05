int helper(char word)
{
	if (word >= 'A' && word <= 'Z'){
		word = word;
	}else{
		word = word - 32;
	}
	return word;
}



void Capitalise(char *phrase)	
{
	int i;
	
	if  (*(phrase + 0)>= 'a' && *(phrase + 0) <= 'z'){
	*(phrase + 0) = helper(*(phrase + 0));
}else{*(phrase + 0) = *(phrase + 0);
}
	
	for (i = 1; *(phrase+i) != '\0'; i++ ){
			if (*(phrase + i - 1) == ' ' && *(phrase + i) >= 'a' && *(phrase + i) <= 'z'){
			*(phrase + i) = helper(*(phrase + i));
		}else{
			*(phrase + i) = *(phrase + i);
		}
	}
}