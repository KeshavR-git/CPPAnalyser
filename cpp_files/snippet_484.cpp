void Capitalise(char *phrase)

{
	int i=0; 
	int p;

	while (phrase[i] != '\0') { 
		 i ++ ;
	}

if ((phrase[0]>96) && (phrase[0]<123)) { 
			phrase[0] -=32 ; 
} 

for (p=0; p<i; p++) { 
	if (phrase[p] == 32) {
			if ((phrase[p+1]>96) && (phrase[p+1]<123)) { 
				phrase[p+1] -=32 ; 
			}
			}
		}
}