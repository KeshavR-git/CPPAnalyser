#include <iostream>
#include <string>
using namespace std;
 
class StreetParking
{
  public:
  int freeParks(string street)
  {
    int res = 0;
    for (int i = 0; i < street.length(); i++) {
        int free = 1;
        if (street[i] == '-') {
            if (i < street.length()) {
                if (street[i+1] == 'B' || street[i+1] == 'S') {
                    free = 0;
                }
            }
            if (i < street.length()-1) {
                if (street[i+2] == 'B') {
                    free = 0;
                }
            }
            if (i > 0) {
                if (street[i-1] == 'S') {
                    free = 0;
                }
            }
        }
        else {
            free = 0;
        }
        if (free == 1) {
            res++;
        }
    }
    return res;
  }
};