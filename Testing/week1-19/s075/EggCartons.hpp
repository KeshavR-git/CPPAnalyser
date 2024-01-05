#include <iostream>
#include <algorithm>
using namespace std;
int XX_MARKER_XX;

 
class EggCartons
{
  public:

    int minCartons(int n) {
        if (n < 8 && n != 6){
            return -1;
        }
        if ( n == 6 || n == 8) {
            return 1;
        }
        else {
            int t1 = minCartons(n-6);
            int t2 = minCartons(n-8);
            if ( t1 >0 && t2 > 0) {
                return min (t1,t2) +1;
            }
            if ( t1 == -1 && t2 > -1 ) {
                return t2+1;
            }
            if ( t1 > -1 && t2 == -1 ) {
                return t1 +1;
            }
            if ( t1> 0 && t2 <0) {
                return t1+1;
            }else {
                return -1;
            }
        }
    }
};