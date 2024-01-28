#include <iostream>
using namespace std;

 
 
class ThrowTheBall
{
  public:

  int gcd(int a, int b)
  //Implementation of finding Greatest Common Divisor of two numbers 
{ 
    if (b == 0) 
        return a; 
    return gcd(b, a % b);  
      
}


  int timesThrown(int N, int M, int L)
  
  // N: Total number of friends
  // M: Time the game stops(when someone received the ball M times)
  // L: Distance of passing the ball directly to the next person
  {
    int times;
    //Record the number of times that the ball is passed

    times = (M-1) * N/gcd(N, L);

    return times;  
  }
};
