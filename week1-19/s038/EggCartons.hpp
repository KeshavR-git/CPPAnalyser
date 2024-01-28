#include <iostream>
using namespace std;
 
class EggCartons
{
  public:
  int minCartons(int n){
    int six = 0;
    int eight = 0;
    int rm = 0;
    if (n<6)
    {
      return -1;
    }
    if (n%8 != 0)
    {
      eight = n/8;
      rm = n%8;
       while(rm%6 !=0){
         eight--;
         six++;
         rm=rm+8;
         if(rm%6 == 0)
         {
            six = rm/6;
            return eight+six;
          }
          if (eight == 0 && n%6 !=0)
          {
            return -1;
          }
       }
      if (rm%6 == 0)
      {
        return rm/6+n/8;
      }
    }
    else if(n%8 == 0)
    {
      return n/8;
    }
  }
};