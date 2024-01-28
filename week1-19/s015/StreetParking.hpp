#include <string>
#ifndef StreetParking_hpp
#define StreetParking_hpp

class StreetParking{

	public:
		int freeParks(std::string street){
			int numParkingSpots = 0;
			street = "--"+street+"--";
			for (int i = 2; i < street.length()-2; ++i){
				if (street[i] == '-'){
					if (street[i+1] != 'B' && street[i+2] != 'B' && street[i-1] != 'S' && street[i+1] != 'S'){
						numParkingSpots++;
					}
				}
			}
			return numParkingSpots;
		}
};
#endif