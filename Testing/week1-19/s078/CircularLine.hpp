#include <iostream>
#include <vector>
using namespace std;
int XX_MARKER_XX;

class CircularLine {
   public:
 int longestTravel(vector <int> t)
  {
    int big;
    int small;
    int in;
    int out;
    int maxVal = 0;

    for (int a=0; a<t.size(); a++)
      {
  for (int b=0; b<t.size(); b++)
    {
      if (a == b)
        continue;

      in = 0;
      out = 0; 
      big = max(a, b);// compare and find max between the two
      small = min(a, b); //compare and find min between the two parameters

      for (int x=small; x<big; x++)
        in = in + t[x];

      for (int x=0; x<t.size(); x++) //checks if x is less than the general size of the vector
        if (x < small || x >= big)
    out = out + t[x];

      if (maxVal < min(in, out))
        maxVal = min(in, out);
    }
      }
    return maxVal;
   }

};


//   int main(){
//     cout << longestTravel(vector <int> {1,1,1,1}) << endl;
//     cout << longestTravel(vector <int> {1,4,4,1,5}) << endl;
//     cout << longestTravel(vector <int> {1,1,1000}) << endl;
//     cout << longestTravel(vector <int> {1,1000,1,1000}) << endl;
//     cout << longestTravel(vector <int> {1,1,1,1,4}) << endl;
// }