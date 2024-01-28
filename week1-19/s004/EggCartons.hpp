#include <iostream>
using namespace std;


class EggCartons {
public:
  int minCartons(int n) {
    // if n is to small or odd return -1
    if (n % 2 != 0 || n < 6 || n == 7) {
      return -1;
    }

    if (n == 12 || n == 16 || n == 14) {
      return 2;
    }


    //if n is directly divisible by 8, or is 6 return 1.
    if (n % 8 == 0) {
      return n/8;
    } else if (n==6) {
      return 1;
    }

    int cartons = 0;
    int eggs = 0;


    cartons = n/8;
    eggs = cartons*8;

    while (eggs != n) {
      eggs -= 8;
      eggs += 6;

      if (eggs == n) {
        return cartons;
      }

      while (eggs + 8 <= n) {
        cartons++;
        eggs += 8;
      }

      if (eggs == n) {
        return cartons;
      }

      while (eggs + 6 <= n) {
        cartons++;
        eggs += 6;
      }

      if (eggs == n) {
        return cartons;
      }

      if (eggs/6==cartons && eggs !=n && n%6 != 0) {

        if ( (n-6)% 8 == 0) {
          return ((n-6)/8) + 1;
        } else if ( (n-8)% 6 == 0) {
          return ((n-8)/6) + 1;
        }

        return -1;
      } else if (n%6 == 0 && eggs/6==cartons && eggs !=n) {
        return n/6;
      }
    }
    return cartons;

  }
};
