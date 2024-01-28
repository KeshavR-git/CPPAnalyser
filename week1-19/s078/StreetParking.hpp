#include <iostream>
#include <string>
using namespace std;
 
 
class StreetParking
{
  public:
int freeParks(string street) {
        int counter = 0;

        for(int a=0; a<street.size(); a++)
            {
                if(street[a] != '-')
                    continue;
                if(street[a+1] == 'S' || street[a+1] == 'B')
                    continue;
                if(street[a+2] == 'B')
                    continue;
                if(a>0)
                    if(street[a-1] == 'S')
                        continue;
                counter++;
                
            }
        return counter;
  }
};



  // int main(){

  //   cout << freeParks("--S--S--S--S--") << endl;
  // }