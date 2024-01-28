#include <string>

class StreetParking {
public:
  int freeParks(std::string street) {
    int freeParks = 0;
    std::string temp = street;

    for(int i = 0; i < int(street.length()); i++) {
      if(street.at(i) == 'B') {
        for(int j = i; j > i-3; j--) {
          if(j < 0) {
            break;
          }else {
            if(street.at(j) == '-') {
              temp.at(j) = '*';
            }
          }
        }
      }

      if(street.at(i) == 'S') {
        if(i > 0) {
          if(street.at(i-1) == '-') {
            temp.at(i-1) = '*';
          }
        }
        if(i+1 < int(street.length())) {
          if(street.at(i+1) == '-') {
            temp.at(i+1) = '*';
          }
        }
      }
    }
    for(int i = 0; i < int(temp.length()); i++) {
      if(temp.at(i) == '-') {
        freeParks++;
      }
    }
    return freeParks;
  }
};
