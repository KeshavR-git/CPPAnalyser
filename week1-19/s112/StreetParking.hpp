#include <iostream>
#include <string>
using namespace std;

class StreetParking
{
	public:
	int freeParks(string street)
	{
		int NumParks = 0;
		int Flag = 0;
		//determine the length of the street
		for (int i = 0; i < street.size(); i++)
		{
			Flag = 0;
			if (street[i] == '-')
			{
				//bus check
				if (((i + 1) < street.size()))
				{
					if (street[i + 1] == 'B')
					{
						Flag = 1;
					}
				}
				if (((i + 1) < street.size()))
				{
					if (street[i + 2] == 'B')
					{
						Flag = 1;
					}
				}
				//side street check
				if (((i + 1) < street.size()))
				{
					if (street[i + 1] == 'S')
					{
						Flag = 1;
					}
				}
				if (((i + -1) >= 0))
				{
					if (street[i + -1] == 'S')
					{
						Flag = 1;
					}
				}
				if (!Flag)
				{
					NumParks++;
				}
			}
		}
		return NumParks;
	}
};