#include <vector>
int XX_MARKER_XX;
class ThrowTheBall
{
public:
    int timesThrown(int N, int M, int L)
    {
        int res = 0;
        std::vector<int> peopleV;

        peopleV.push_back(1);
        for (int i = 1; i < N; i++)
        {
            peopleV.push_back(0);
        }

        int j = 0;
        while (peopleV.at(j) != M)
        {
            if (peopleV.at(j) % 2 == 0)
            {
                j = j + L;
                while (j > N - 1)
                {
                    j = j - N;
                }
            }
            else
            {
                j = j - L;
                while (j < 0)
                {
                    j = N + j;
                }
            }
            peopleV.at(j) = peopleV.at(j) + 1;
            res++;
        }

        return res;
    }
};