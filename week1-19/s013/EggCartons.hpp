#include <iostream>
using namespace std;
 
 
class EggCartons
{
  public:
  int minCartons(int n)
  {
    if (n < 6 || n % 2 != 0)
    {
      return -1;
    }

    if (n == 6 || n == 8)
    {
      return 1;
    }

    if (n < 12)
    {
      return -1;
    }
    
    int count = 0;
    int sixNumber = 0;
    int eightNumber = 0;
    while(count < 100) {
      sixNumber = sixNumber + 6;
      eightNumber = eightNumber + 8;
      count = count + 1;
      if (sixNumber == n || eightNumber == n)
      {
        return count;
      }
    }

    count = 0;
    sixNumber = 2;
    eightNumber = 0;
    int digits = 2;
    int theNumber = 0;

    while (count < 100) {
      sixNumber = digits;
      eightNumber = 0;

      for (int i = 0; i < digits + 1; ++i)
      {
        theNumber = sixNumber * 6 + eightNumber * 8;
        if (theNumber == n)
        {
          count = digits;
          return count;
        }
        sixNumber = sixNumber - 1;
        eightNumber = eightNumber + 1;
      }

      digits = digits + 1;
    }


    return -1;
  }
};