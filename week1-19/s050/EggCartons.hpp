#ifndef EGGCARTONS_H
#define EGGCARTONS_H

class EggCartons
{
public:
	// Function to determine least number of egg cartons required
	int minCartons(int n)
	{
		// Rule out easy cases
		if (n%2!=0)
		{
			return -1;
		}
		else if (n<6)
		{
			return -1;
		}
		else if (n==6 || n==8)
		{
			return 1;
		}

		int eights = 11;
		int sixes = 2;

		// Alternate through the even numbers and check each one
		while (eights>=0 && sixes>=0)
		{
			if (n == eights*8 + sixes*6)
			{
				return eights + sixes;
			}
			else if (sixes>=3)
			{
				eights = eights+2;
				sixes = 0;
			}
			else
			{
				eights--;
				sixes++;
			}
		}
		return -1;
	}
};

#endif