#include <string>
#ifndef STREETPARKING_H
#define STREETPARKING_H


// Class of Street Parking
class StreetParking
{
public:
	int freeParks(std::string street)
	{
		// Initialising length of street and count as 0
		int length = street.length()-1;
		int count = 0;

		// Go from the end of the street to the start
		while (length >= 0)
		{
			// Vacant Spot
			if (street[length]=='-')
			{
				if (street[length-1]!='S')
				{
					count++;
				}
				length--;
			}
			// Driveway
			else if (street[length]=='D')
			{
				length--;
			}
			// Side street
			else if (street[length]=='S')
			{
				if (street[length-1]=='S' || street[length-1]=='B')
				{
					length--;
				}
				else
				{
					length = length-2;
				}
			}
			// Bus Stop
			else if (street[length]=='B')
			{
				if (street[length-1]=='B')
				{
					length--;
				}
				else if (street[length-2]=='S' || street[length-2]=='B')
				{
					length = length-2;
				}
				else
				{
					length = length-3;
				}
			}
		}

		return count;
	}
};

#endif