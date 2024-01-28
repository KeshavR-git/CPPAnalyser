#include <iostream>
#include <vector>
using namespace std;

 
class ThrowTheBall
{
  public:

    int timesThrown(int N, int M, int L) {
        int total;
        vector<int> vec(N);
        int i = 0;
        vec[i] = 1;

        while (vec[i] != M ) {
            if ( vec[i]%2 != 0 ) { // go right
                total++;
                if ( (i+L) > (N-1) ) {
                    i = L - (N-i);
                    vec[i] ++;
                }else {
                    i = i + L;
                    vec[i] ++;
                }
            }else if( vec[i]%2 == 0) { //go left
                total++;
                if ( (i-L) < 0) {
                    i  = (N+i)-L;
                    vec[i] ++;
                } else {
                    i = i - L;
                    vec[i] ++;
                }
            }
        }
        return total;
    }
};