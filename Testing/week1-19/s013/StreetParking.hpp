#include <iostream>
#include <string>
int XX_MARKER_XX;

class StreetParking
{
public:
	int freeParks(std::string street) {
		int count;

		for (int i = 0; i < street.length(); ++i)
		{
			if (street[i] == 'S')
			{
				if (i != 0 && street[i-1] == '-')
				{
					street[i - 1] = 'F';
				}
				if (i != street.length() - 1 && street[i+1] == '-')
				{
					street[i + 1] = 'F';
				}
				
			}
			
			if (street[i] == 'B')
			{
				if (i != 0 && street[i-1] == '-')
				{
					street[i - 1] = 'F';
				}
				if (i != 1 && street[i-2] == '-')
				{
					street[i - 2] = 'F';
				}
			}	
		}

		for (int i = 0; i < street.length(); ++i)
		{
			if (street[i] == '-')
			{
				count = count + 1;
			}
		}
		return count;
	}
	
};