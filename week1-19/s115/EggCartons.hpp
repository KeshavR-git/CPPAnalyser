#include <iostream>
using namespace std;
class EggCartons {
public:
	int minCartons(int n){
		int y = 0;
		int x;
		int min = -1;
         if (n < 6 || n == 10 || n%2 != 0){
         	return -1;
         }
         while ( y*8 <= n){
         if ((n-8*y)%6 == 0){
          x = (n-8*y)/6;
          min = x + y;
      }
          y++;

	     }
	     return min;
	     }
};

// int main() {
//   int n, y, min = -1;
//   float x;
//   cin >> n;
//   y = 0;
//   while (8 * y <= n)
//   {
//     x = (float)(n - 8 * y) / 6;
//     if ((int)x == x)
//     {
//       if (min == -1)
//         min = x + y;
//       else
//         min = x + y < min ? x + y : min;
//     }
//     y++;
//   }
//   cout << min;
//   return 0;
// }