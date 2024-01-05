#include <iostream>
#include <string>
using namespace std;
int XX_MARKER_XX;


class StreetParking {
public:
  int freeParks(string street) {
    int parks = 0;

    for (int i = 0; i < street.length(); i++) {
      //cout << "CUR POS: " << street[i] << endl;
      bool isOk = true;
      if (street[i] != '-') {
        isOk = false;
        //cout << "not -" << endl;
      }
      if (street[i+1] == 'B' && i < street.length()-1) {
        isOk = false;
        //cout << "-1 B" << endl;
      }
      if (street[i+2] == 'B' && i < street.length()-2) {
        isOk = false;
        //cout << "-2 B" << endl;
      }
      if (street[i-1] == 'S' && i > 0) {
        isOk = false;
        //cout << "-1 S" << endl;
      }
      if (street[i+1] == 'S' && i < street.length()-1) {
        isOk = false;
        //cout << "+1 S" << endl;
      }

      if (isOk) {
        parks++;
        //cout << "GOOD!" << endl;
      }
    }

    return parks;
  }
};
