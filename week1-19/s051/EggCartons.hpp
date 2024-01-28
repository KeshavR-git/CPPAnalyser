#include <iostream>
using namespace std;

class EggCartons
{
    public:
        int minCartons(int n)
        {
            if(n%2!=0 || n<6 || (n>8 && n<14&& n!=12))
            {
                return -1;
            }
            
            else if(n%8==0)
            {
                int res=n/8;
                return res;
            }
            
            else
            {
                int remain=n%8;
                if(n%6==0)
                {
                    int res=n/8+1;
                    return res;
                }
                int range=6-remain;
                int replace=range/2;
                int numeight=n/8;
                numeight=numeight-replace;
                int numsix=(n-8*numeight)/6;
                int res=numeight+numsix;
                return res;
            }
        }
};
