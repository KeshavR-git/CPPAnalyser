#include <iostream>
#include <vector>
#include <string>
using namespace std;


class StreetParking {

public:
  int freeParks(string road) {
    int res = 0;
    int validBehind = 0;
    int i = 0;
    int n = road.size();

    while (i < n) {
      int removeSpaces = 0;

      if (road[i] != '-') {

        if (road[i] == 'B') {

          removeSpaces = 2;

        } else if (road[i] == 'S') {

          removeSpaces = 1;

        }

        if (road[i] == 'D' && road[i+1] == 'B' && road[i-2] != 'S') {
          removeSpaces++;
        }

        if (validBehind-removeSpaces > 0) {

          res += validBehind-removeSpaces;

        }

        validBehind = 0;

      }else if (road[i-1] != 'S') {
        validBehind++;
      }

      if (i == n-1 && validBehind-removeSpaces > 0) {
        res += validBehind-removeSpaces;

      }
      i++;
    }
    return res;
  }
};
