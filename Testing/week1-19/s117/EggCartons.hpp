int XX_MARKER_XX;


class EggCartons
{
public:
    int minCartons(int n)
    {
        int ans = 0;
        if (n < 6 || n % 2 != 0)
        {
            return -1;
        }
        while (n > 0)
        {
            if (n % 8 == 0)
            {
                while (n > 0)
                {
                    n -= 8;
                    ans++;
                }
            }
            else
            {
                if (n % 6 == 0)
                {
                    n -= 6;
                    ans++;
                }
                else
                {
                    n -= 8;
                    ans++;
                }
            }
        }
        if (n < 0)
        {
            return -1;
        }
        else
        {
            return ans;
        }
        // if (n % 8 == 0)
        // {
        //     while (n > 0)
        //     {
        //         n -= 8;
        //         ans++;
        //     }
        // }
        // else
        // {
        //     while (n % 6 != 0)
        //     {
        //         n -= 8;
        //         ans++;
        //         if (n == 0)
        //         {
        //             return ans;
        //         }
        //     }
        // }
        // if (n % 6 == 0)
        // {
        //     while (n > 0)
        //     {
        //         n -= 6;
        //         ans++;
        //     }
        // }
        // if (n == 0)
        // {
        //     return ans;
        // }
        // else
        // {
        //     return -1;
        // }
    }
};