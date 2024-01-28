#include <iostream>
#ifndef inchworm_hpp
#define inchworm_hpp


class Inchworm
{
    public:
    //formula to determine how many leaves are eaten
    int lunchtime(int branch, int rest, int leaf)
    {
        //number of leaves eaten
        int res = 0;

        //checks to ensure constraints are met
        if(branch>=1 && branch<=1000000 && rest>=1 && rest<=1000 && leaf>=1 && leaf<=1000)
        {
            //for loop to move inchworm [rest] inches and ends at the end of the branch
            for(int i = 0; i<=branch; i=i+rest)
            {
                //checks if there is a leaf at the rest location and eats if there
                if(i%leaf == 0)
                {
                    res++;
                }
            }
        }

        return res;
    }
};

#endif;