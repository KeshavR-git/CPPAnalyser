#include <iostream>
#include <vector>
using namespace std;


class EggCartons
{
public:
    int minCartons(int n)
    {
        /**
         * Check that the number is positive and >= 6
         */
        if (n % 2 != 0 || n < 6)
            return -1;

        int counter = 0, min = INT32_MAX;

        if (n % 8 == 0)
            return n / 8;

        for (int i = 0; i <= (n / 8); i++)
        {
            if ((n - (i * 8)) % 6 == 0)
            {
                counter = (n - (i * 8)) / 6 + i;

                if (min > counter) 
                    min = counter;
            }
        }

        if (min == INT32_MAX)
            return -1;
        
        return min;
    }

private:
    //
};