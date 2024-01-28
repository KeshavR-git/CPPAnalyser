#include <string>
#ifndef StreetParking_hpp
#define StreetParking_hpp

class StreetParking{
	public:
		int freeParks(std::string street){
			int freeParks=0;
			street = "00"+street+"00";
			for (int i = 2; i < street.length()-2; ++i)
			{
				if (street[i]=='-')
				{
					if (street[i-1]!='S' && street[i+1]!='S' && street[i+1]!='B' && street[i+2]!='B')
					{
						freeParks++;
					}
				}
			}
			return freeParks;
		}
};
#endif