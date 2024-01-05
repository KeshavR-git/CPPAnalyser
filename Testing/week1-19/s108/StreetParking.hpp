#include <iostream>
#include <stdlib.h>
#include <string>
#include <algorithm>
int XX_MARKER_XX;

class StreetParking {
    public:
    int freeParks(std::string street) {
        //Initialize free parking spots to street length
        int count = 0;
        int Bstop = 0;  //No. of bus stops
        int Sstreet = 0;    //No. of side-streets
        std::string str = "-";
        //std::cout << street << std::endl;
        //std::cout << "Street length: " << street.length() << std::endl;

        //Check for "-", return 0 if none found
        size_t found = street.find(str);
        if(found != std::string::npos) {
            //std::cout << "Parking spots available" << std::endl;
        }
        else {
            //std::cout << "No parking spots found" << std::endl;
            return 0;
        }
        //std::cout << "\n";

        //Search through whole string
        for(int i = 0; i < street.length(); i++) {
            if(street[i] == 'D') {
                //std::cout << "Driveway" << std::endl;
            }
            else if((street[i] == 'B') || (street[i+1] == 'B') || (street[i+2] == 'B')) {
                //std::cout << "Bus stop" << std::endl;
            }
            else if((street[i] == 'S') || (street[i+1] == 'S') || (street[i-1] == 'S')) {
                //std::cout << "Side-street" << std::endl;
            }
            else {
                //std::cout << "Parking spot found" << std::endl;
                count++;
            }
        }
        //std::cout << "\n";
        //std::cout << "Count: " << count << std::endl;

        return count;
    }
};