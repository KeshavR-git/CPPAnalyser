#include <iostream>
#include <string>
using namespace std;


class StreetParking {

public:

    /**
     * 
     * @param street, each character decribes a section of the street 5 meters in length, between 1 to 50.
     * D: driveway
     * B: bus stop
     * S: side-street
     * -: all other section
     * @return total number of possible parking spaces on the street
     */
    int freeParks(string street) {

        int length = street.length();
        if (length < 1 || length > 50) return -1;

        // invalid parking space: D, --B, -S-
        int res = 0;

        int i;
        for (i = 0; i < length; i++) {
            
            if (street[i] == 'D') continue;
            else if (street[i] == 'B' || street[i + 1] == 'B' || street[i + 2] == 'B') continue;
            else if (street[i] == 'S' || street[i - 1] == 'S' || street[i + 1] == 'S') continue;
            else res++;
        }

        return res;
    }
};