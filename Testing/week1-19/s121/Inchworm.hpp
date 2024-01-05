#include <vector>
int XX_MARKER_XX;
class Inchworm
{
public:
    int lunchtime(int branch, int rest, int leaf)
    {
        int res = 0;
        std::vector <int> branchV;


        for (int i = 0; i < branch + 1; i++)
        {
            if (i % leaf == 0)
            {
                branchV.push_back(1);
            } else 
            {
                branchV.push_back(0);
            }
        }

        for (int j = 0; j < branch + 1; j = j + rest)
        {
            if (branchV.at(j) == 1)
            {
                res++;
            }
        }

        return res; // return your result
    }
};