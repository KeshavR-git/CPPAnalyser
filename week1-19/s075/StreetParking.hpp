#include <iostream>
#include <string>
using namespace std;
 
 
class StreetParking
{
  public:
  int freeParks(string street){
      int total = street.size();
      
      for (int i = 0; i < street.size(); i ++ ) {
              switch (street[i]) {
                case 'B':  //Finds a bus stop
                    total--;    //decrements because cannot park here
                    street[i] = 'X'; //sets spot to X meaning that this spot has been checked (cannot park)
                    if (street[i-2] != 'X' && (i-2) >= 0) {  //sets spot 2 behind it to X
                        street[i-2] = 'X';
                        total--;
                    }
                    if ( street[i-1] != 'X' && (i-1) >= 0 ) {    //sets spot 1 behind it to X
                        street[i-1] = 'X';
                        total--;
                    }
                    break;
                case 'S':
                    total --;
                    street[i] = 'X';
                    if (street[i+1] != 'X' && (i+1) < street.size() && street[i+1] == '-' ) {
                        street[i+1] = 'X';
                        total--;
                    }
                    if (street[i-1] != 'X' && (i-1) >= 0 ) {
                        street[i-1] = 'X';
                        total--;
                    }
                    break;
                case 'D':
                    total --;
                    street[i] = 'X';
                    break;
                default:
                    break;
              }
          }
      //cout << street << endl;
      return total;
  }
};