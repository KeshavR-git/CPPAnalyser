using namespace std;
#include <iostream>
#include <string>
int XX_MARKER_XX;

 
class StreetParking
{
  public:
  int freeParks(string street)
  {
    // your code for the problem
    int parks[street.length()];
    int res = 0;

    for (int i = 0; i < street.length(); i++) {
      parks[i] = 1;
    }

    for (int i = 0; i < street.length(); i++) {
      if (street[i] == 'B' || street[i] == 'S' || street[i] == 'D') {
        parks[i] = 0;
      }
      if (i + 1 < street.length()) {
        if (street[i+1] == 'B' || street[i+1] == 'S') {
          parks[i] = 0;
        }
      }
      if (i + 2 < street.length()) {
        if (street[i+2] == 'B') {
          parks[i] = 0;
        }
      }
      if (i > 0) {
        if (street[i-1] == 'S') {
          parks[i] = 0;
        }
      }
    }

    for (int i = 0; i < street.length(); i++) {
      res += parks[i];
    }
    return res;  // return your result
  }
};