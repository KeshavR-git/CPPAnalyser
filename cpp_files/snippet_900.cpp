#include <stdio.h>
#include <string.h>

void Capitalise(char* phase)
{
	int i = 0;
	while (phase[i] != '\0') {
		if (phase[i] < 123 && phase[i]>96) {
			if (phase[i - 1] == 32 || i == 0) {
				phase[i] = phase[i] - 32;
			}

		};
		i++;
	};
}