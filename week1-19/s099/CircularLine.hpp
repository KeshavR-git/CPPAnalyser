using namespace std;
#include <iostream>
#include <vector>

 
class CircularLine
{
  public:
  int longestTravel(vector<int> t)
  {
    // your code for the problem
    int res = 0;
    int len = 0;
    int len1 = 0;
    int len2 = 0;
    int pos = 0;

    for (int i = 0; i < t.size(); i++) {
      for (int j = 0; j < t.size(); j++) {
        if (i != j) {
          pos = i;
          while (pos < j) {
            len1 += t[pos];
            pos++;
          }
          pos = i;
          while (pos+t.size() > j) {
            len2 += t[((pos-1)+t.size())%t.size()];
            pos--;
          }
          if (len1 > len2) {
            len = len2;
          } else {
            len = len1;
          }
          if (len > res) {
            res = len;
          }
          len = 0;
          len1 = 0;
          len2 = 0;
        }
      }
    }

    return res;  // return your result
  }
};