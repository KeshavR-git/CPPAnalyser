#include <iostream>
#include "math.h"
int XX_MARKER_XX;

class EggCartons
{
public:
	int minCartons(int n)
	{
		//	Ensure data requirements are set
		if(n>100 || n<1 || n % 2 != 0)
			return -1;

		//	Initialise Varibales
		int num_8_cartons = floor(n / 8);
		int num_6_cartons = -1;
		int left_over_eggs = n - num_8_cartons*8;
		int temp_8_cartons = num_8_cartons;
		
		//	Loop through expected values a maximum of 3 times (8*3=24)
		for(int i=0; i<3; i++)
		{			
			//	Check that num_8_cartons is still a logical value
			temp_8_cartons = num_8_cartons - i;
			if(temp_8_cartons<0)
				return -1;

			//	Assign the number of 6 egg cartons
			if((left_over_eggs+8*i) % 6 == 0)
			{
				num_6_cartons = floor((left_over_eggs+8*i) / 6);
				break;
			}
		}

		num_8_cartons = temp_8_cartons;

		//	If no num_6_cartons value was assigned, there must be an error
		if(num_6_cartons == -1)
			return -1;

		return num_8_cartons+num_6_cartons;
	}
};