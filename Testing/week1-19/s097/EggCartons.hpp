#include <iostream>
#include <algorithm> 
#include <stdio.h>      
#include <math.h> 
#include <string> 
using namespace std;
int XX_MARKER_XX;
 
class  EggCartons
{
  public:
  int minCartons(int n)
  { 
    if(n % 2 != 0 || n < 6 || n == 10){
      return -1;
    }
    if(n % 8 == 0){
      return n / 8;
    }
    else{
      return (n / 8) + 1;
    }
    
  }
};
