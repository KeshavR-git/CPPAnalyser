#include <iostream>
using namespace std;
int XX_MARKER_XX;

class StreetParking
{
public:
	int freeParks (string street)
	{
		int counter = 0; //Incremented in while loop
		if ( (street.length() < 1) || (street.length() > 50) )
		{
			return -1; //String length constraint check
		}
		while(counter < street.length())
		{
			if ( (street[counter] != 'D') && (street[counter] != 'B') && (street[counter] != 'S') && (street[counter] != '-')  )
			{
				return -1; //Invalid character check
			}
			counter++;
		}
		counter = 0; //Valid string length and chars, reset counter
		int parks = 0; //Return value
		int decount = -1; //Prevent double counting
		while(counter < street.length())
		{
			while(street[counter] == '-')
			{
				parks++;
				counter++;
				cout << "+1, total is " << parks << endl;
			}
			if (street[counter] == 'B')
			{
				if (counter > 1)
				{
					if ((street[counter-2] == '-') && (counter-2 != decount))
					{
						parks--;
						decount = counter-2;
					}
					if ((street[counter-1] == '-') && (counter-1 != decount))
					{
						parks--;
						decount = counter-1;
					}
				}
				else if (counter > 0)
				{
					if ((street[counter-1] == '-') && (counter-1 != decount))
					{
						parks--;
						decount = counter-1;
					}
				}
			}
			else if (street[counter] == 'S')
			{
				if (counter > 0)
				{
					if ((street[counter-1] == '-') && (counter-1 != decount))
					{
						parks--;
						cout << "-1 before, total is " << parks << endl;
						decount = counter-1;
					}
				}
				if (counter < (street.length() - 1))
				{
					if ((street[counter+1] == '-') && (counter+1 != decount))
					{
						parks--;
						cout << "-1 after, total is " << parks << endl;
						decount = counter+1;
					}
				}
			}
			counter++; //Final step is to increment 
		}
		return parks;
	}

	
};