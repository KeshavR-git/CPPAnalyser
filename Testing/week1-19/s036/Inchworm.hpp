#include "math.h"
using namespace std;
int XX_MARKER_XX;


class Inchworm
{
public:
    int lunchtime(int branch, int rest, int leaf)
    {
        int count_eat = 0;
        for (int i = 0; i <= branch; i += rest)
        {
            if(i % leaf == 0)
            {
                count_eat++;
            }
        }
        return count_eat;  // return your result
    }
};