#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

 void Capitalise(char* phrase){
	 int l,d, i,bolean,b2;
	 l = strlen(phrase);
	 for (i = 0;i < l;i++) {
		 d = phrase[i];
		 if (d >= 97 && d <= 122) {
			 bolean = 1;
		 }
		 else { bolean = 0; }
		 if (phrase[i - 1] == ' ')
			 b2 = 1;
		 else if (i == 0) {
			 b2 = 1;
		 }
		 else { b2 = 0; }
		 if (b2 == 1 && bolean == 1) {
			 d = d - 32;
			 phrase[i] = d;
		 }
		 

	 }
	
}