#include <iostream>
#include <string>
using namespace std;
int XX_MARKER_XX;


class StreetParking
{
public:
	int freeParks(string street)
	{
		int counter = 0;
		int size =  street.size();
		if(size == 1){
			if(street.at(0) == '-'){
				counter = 1;
			}
		}else if(size == 2){
			if(street.at(0) == 'S' || street.at(1) == 'S'){
				counter = 0;
			}else if(street.at(1) == 'B'){
				counter = 0;
			}else{
				for(int i=0; i<1; i++){
					if(street.at(i) == '-'){
						counter++;
					}
				}
			}
		}else{
			for(int a=0; a<=size-1; a++){
				if(a == 0){
					if(street.at(0) == '-' && street.at(1) != 'B' && street.at(2) != 'B' && street.at(1) != 'S'){
						counter++;
					}
				}else if(a == size-2){
					if(street.at(size-2) == '-' && street.at(size-3) != 'S' && street.at(size-1) != 'B' && street.at(size-1) != 'S'){
						counter++;
					}
				}else if(a == size-1){
					if(street.at(size-1) == '-' && street.at(size-2) != 'S'){
						counter++;
					}
				}else{
					if(street.at(a) == '-' && street.at(a-1) != 'S' && street.at(a+1) != 'S' && street.at(a+1) != 'B' && street.at(a+2) != 'B'){
						counter++;
					}
				}
			}
		}
		return counter; 
	}
};

/*int main()
{
	StreetParking a;
	
	cout << a.freeParks("B") << endl;
}*/