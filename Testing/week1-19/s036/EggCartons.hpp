#include "math.h"
using namespace std;
int XX_MARKER_XX;


class EggCartons
{
public:
    int minCartons(int n)
    {
        int six_count = 0;
        int eight_count = 0;
        int total_count = 100;
        int temp_count = 100;

        if(n < 6 || n % 2 != 0)
            return -1;

        if (n % 8 == 0)
            temp_count = n / 8;
        else if(n % 8 != 0 && n % 6 == 0)
            temp_count = n / 6;

        int div = n / 6;
        int rem = n % 6;

        if (rem % 8 == 0 && rem != 0)
        {
            six_count = div;
            eight_count = rem / 8;
            total_count = six_count + eight_count;
        }
        else
        {
            total_count = -1;
            while(div >= 1)
            {
                div--;
                int temp = n - (6 * div);
                if (temp % 8 == 0)
                {
                    six_count = div;
                    eight_count = temp / 8;
                    total_count = six_count + eight_count;
                }
            }
        }

        if (temp_count > 0 && total_count == -1 && temp_count != 100)
            return temp_count;

        return min(temp_count, total_count);
    }
};