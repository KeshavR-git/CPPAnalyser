void Capitalise(char* phrase)
{
	int i; 

	for (i=0; i < strlen(phrase); i++) {
		//if it is an alphabet and the after a space  
		if (((phrase[i] >= 97) && (phrase[i] <= 122)) && phrase[i-1] == 32) {
			phrase[i] = phrase[i] - 32;
		}
		//if it is an alphabet and the first letter of the string 
		else if (((phrase[i] >= 97) && (phrase[i] <= 122)) && i == 0) {
			phrase[i] = phrase[i] - 32;
		}
		
		else{
		}
	}
}