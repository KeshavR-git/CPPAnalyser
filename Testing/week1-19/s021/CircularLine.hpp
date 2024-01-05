#include <vector>
#include <algorithm>
int XX_MARKER_XX;

class CircularLine
{
public: 
    int longestTravel(std::vector<int> t)
    {
        int n = t.size();
        int sum = 0;

        for (int i=0; i<n; i++)
        {
            sum += t[i];
        }

        int max = 0;
        int inner = t[0];
        int outer = sum - t[0];

        int head = 1;
        int tail = 0;

        while (head != 0)
        {
            max = std::max(std::min(inner, outer), max);

            if (outer > inner)
            {
                inner += t[head];
                outer -= t[head];
                head++;
                head = head%n;
            }
            else
            {
                inner -= t[tail];
                outer += t[tail];
                tail++;
                tail = tail%n;
            }
        }
        return max;
    }
};