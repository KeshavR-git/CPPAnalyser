#include <iostream>
using namespace std;

 
 
class EggCartons
{
  public:
  int minCartons(int n)

  {
     int res = 0;
    //Record the minimal number of egg cartons he must buy

    int N_eight = n / 8;

    int count = 0;

    if ( n < 6)
      //If total number of eggs are less than 6 ,return -1
    {
      res = -1;
    }

    else if ((n % 6 == 0) && (n % 8 == 0))
    //If n can be divisible by 8 and 6, then choose the minimum value
    {
      res = min(n / 6, n / 8);
    }

    else if ((n  == 6) || (n  == 8))
    {
      res = 1;
    }

    else if (n % 2 == 1)
    {
      res = -1;
    }

    else
    {
      for (int i = n - N_eight * 8; i < n ; i+=8)
      {
        //cout<<i<<endl;
        count++;
        //cout<<count<<endl;
        //Count the times of n - 8 

        if (i % 6 == 0)
        {
          res = count + (n - count * 6) / 8;
          //minimal number of egg cartons = number of egg cartons which is 6 + number of egg cartons which is 8
          
          break;
        }

        else if ((i % 6 != 0) && (n % 6 == 0))
        {
          res = n / 6;
        }
        else
        {
          res = -1;
        }
      }

    }
    
    return res;  
  }
};

