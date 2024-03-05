void Capitalise(char *phrase)
{
	 int i;
	 int value, value1;
	 int length;
	 int capital;

	 length = strlen(phrase);

	 value1 = phrase[0];

	 if ((value1 >= 97) && (value1 <= 122)) {
		 capital = value1 - 32;
		 phrase[0] = (char)capital;
	 }

	 for (i = 0; i < length; i++) {

		 if ((phrase[i] == 32) || (phrase[i] == 0)) {

			 value = phrase[i + 1];

			 if ((value >= 97) && (value <= 122)) {
				 capital = value - 32;
				 phrase[i + 1] = (char)capital;
			 }

		 }
	 }
}