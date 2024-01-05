#include "math.h"
#include <iostream>
#include <string>
#include <vector>
using namespace std;
int XX_MARKER_XX;


class StreetParking
{
public:
    int freeParks(string street)
    {
        string street_copy = street;

    	int parking_count = 0;
    	 if (street[0] == '-' && street[1] == 'B')
        {
        	street.insert(street.begin(), 1, '-');
        	street_copy.insert(street_copy.begin(), 1, '-');
        }

        if (street[0] == 'B')
        {
        	street.insert(street.begin(), 2, '-');
        	street_copy.insert(street_copy.begin(), 2, '-');
        }

        if (street[0] == 'S')
        {
        	street.insert(street.begin(), 1, '-');
        	street_copy.insert(street_copy.begin(), 1, '-');
        }

        if (street[street.length()] == 'S')
        {
        	street.insert(street.end(), 1, '-');
        	street_copy.insert(street_copy.end(), 1, '-');
        	parking_count -= 1;
        }

        for (int i = 0; i < street.length(); ++i)
        {

            if (street[i] == 'B')
            {
            	 street_copy.replace(i - 2, 3, "XXX");
            }

            if (street[i] == 'S')
            {
                street_copy.replace(i - 1, 3, "XXX");
            }

            if (street[i] == 'D')
            {
                street_copy.replace(i, 1, "X");
            }
        }

        
        for (int i = 0; i < street_copy.length(); ++i)
        {
            if (street_copy[i] == '-')
            {
                parking_count++;
            }
        }

        if (parking_count >= 0)
        {
        	return parking_count;
        }
        else
        {
        	return 0;
        }
        
    }
};