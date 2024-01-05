#include <iostream>
using namespace std;
int XX_MARKER_XX;
 
class Inchworm
{
  public:
  int lunchtime(int branch, int rest, int leaf)
  {
    int max = 1;
     
     max = (rest > leaf) ? rest : leaf;
 
    do
    {
        if (max % rest == 0 && max % leaf == 0)
        {
            break;
        }
        else
            ++max;
    } while (true);   
    int number = branch/max +1;
    return number;
  }
};