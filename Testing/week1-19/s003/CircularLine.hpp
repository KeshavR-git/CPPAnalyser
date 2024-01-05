#include <algorithm>
#include <vector>  
using namespace std;
int XX_MARKER_XX;
 
 
class CircularLine
{
  public:
    int longestTravel(vector<int> t) {

      int length = t.size(); 
      int index; 
      int max1 = 0;
      int left, right, big, small; 

      for(int i = 0; i < length; i++) {

        for(int j = 1; j < length; j++) {

          if(i == j) {

            //no point checking the same value twice
            continue; 
          }
            big = max(i, j);
            small = min(i, j);

            left = 0; 
            for(int k = small; k < big; k++) {

              left += t[k];
            }

            right = 0;
            for(int k = 0; k <length; k++) {

              if(k < small || k >= big) {
                right += t[k];
              } 
            }

            if (max1 < min(left, right)) {

              max1 = min(left, right); 
            }

          }
        }
        return max1; 
      }
};
