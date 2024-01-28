#include <iostream>
#include <vector>
using namespace std;
// Attempt at EggCartons problem

//A1720286, T Galindo



class EggCartons
{
public:
  int minCartons(int);
};

int EggCartons::minCartons(int n)
{
  //FILTER - inputs with no solution
  if( n % 2 == 1 )        return -1;
  if( n < 6 || n == 10 )  return -1;

  //INIT - integers to keep track of # of EggCartons
  int num_6s = 0;
  int num_8s = 0;

  //LOOP - over input until multiple of 8 is reached
  while( n % 8 != 0 && n >= 0 ) { n -= 6; num_6s++; }
  if ( n != 0 ) num_8s = n / 8;

  return num_6s + num_8s;

}