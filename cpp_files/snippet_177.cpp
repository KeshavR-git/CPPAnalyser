void Capitalise(char *phrase)
{
	int spaceBefore = 1,i=0;
	while(i!=strlen(phrase)){
		if (spaceBefore){
			if((phrase[i] >='a')&&(phrase[i] <= 'z')){
				phrase[i] -= 32;
			}
		}
		spaceBefore = (phrase[i] == ' ') ? 1 : 0;
		i++;
	}
}