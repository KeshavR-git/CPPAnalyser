#include <iostream>
using namespace std;
int XX_MARKER_XX;


int LCM ( int n1, int n2 )
{
  if ( n2 > n1 )
  {
    int temp = n1;
    n1 = n2; n2 = temp;
  }

  // cout << "n1: " << n1 << " n2: " << n2 << endl;

  int lowest_common_multiple = n1;

  while ( lowest_common_multiple % n2 != 0 ) lowest_common_multiple += n1;

  return lowest_common_multiple;

}

class ThrowTheBall
{
public:
  int timesThrown ( int, int, int );
};

int ThrowTheBall::timesThrown ( int N, int M, int L )
{
  
  int lowest_common_multiple = LCM ( N, L );

  int throws_per_rev = lowest_common_multiple / L;

  return throws_per_rev * ( M - 1 );

}
