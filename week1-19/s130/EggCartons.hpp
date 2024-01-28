#include <cmath>
#include <iostream>

class EggCartons
{
public:
    int minCartons(int n)
    {
        //checks for odd/edge cases
        if (n % 2 == 1 || n < 6)
        {
            return -1;
        }
        double min = n;
        double y;
        for (double x = 0; x < n; x++)
        {
            y = -(6*x-n)/8;
            if (y < 0)
            {
                break;
            }
            //tests if x+y is an interger
            if (floor(y+x) == y+x)
            {
                if (y+x < min)
                {
                    min = y+x;
                }
            }
        }

        //checks for no feasible solution on even number
        if (min == n)
        {
            return -1;
        }
        return (int) min;
    }
};
