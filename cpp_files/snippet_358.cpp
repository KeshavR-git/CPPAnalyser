void Capitalise(char *phrase)
{
	int i = 0, j = 0, k = 0;
	int capPos[1000] = {0};
	
	if ((phrase[0] >= 97) && phrase[0] <= 122)
		phrase[0] = phrase[0] - 32;
	
	while (phrase[i] != '\0'){
		if ((phrase[i] == 32) && (phrase[i+1] >= 97) && (phrase[i+1] <= 122)){
			capPos[j] = i + 1;
			j++;
		}
		i++;
	}
	
	while (capPos[k] != 0){
		phrase[capPos[k]] = phrase[capPos[k]] - 32;
		k++;
	}
	
	return;
}