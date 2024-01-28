using namespace std;
 
 
class StreetParking
{
  public:
  int freeParks(string street){
	int totalParks = 0;
	bool park = false;

	for (int i = 0; i <= street.length(); i++){
		char c = street[i];
		if (c == '-'){
			
			park = true;
			if(street[i+2] == 'B' || street[i+1] == 'B'){
				park = false;
			}
			else if(street[i-1] == 'S' || street[i+1] == 'S'){
				park = false;
			}
			else{
				totalParks++;
			}
			park = false;

		}

	}
	return totalParks;
}
};