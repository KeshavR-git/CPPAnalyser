
class Inchworm
{
public:
    int lunchtime(int branch, int rest, int leaf)
    {
        int pos = 0;
        int res = 0;
        while (pos <= branch) {
            if (pos % leaf == 0) {
                res++;
            }
            pos += rest;
        }
        return res;
    }
};