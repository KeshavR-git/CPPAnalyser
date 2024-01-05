#include <iostream>
using namespace std;
int XX_MARKER_XX;


class Inchworm {
public:
  int lunchtime(int branch, int rest, int leaf) {
    int res = 1;
    for (int i = rest; i <= branch; i=i+rest) {
      if (i % leaf == 0) {
        res++;
      }
    }
    return res;
  }
};
