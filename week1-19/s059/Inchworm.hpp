#include <iostream>
using namespace std;




#ifndef INCHWORM_HPP
#define INCHWORM_HPP

class Inchworm
{
    public:
    int lunchtime(int branch, int rest, int leaf)
    {
        // Track starting position and number of leaves consumed
        int start_leaf = 0;
        int leaf_count = 0;

        // Incrament leaf counter if the value of the current path the inchworm takes
        // is a factor of the value of leaf.
        for(start_leaf; start_leaf <= branch; start_leaf+=rest)
        {
            if(start_leaf % leaf == 0)
            {
                leaf_count++;
            }
        }

        return leaf_count;

    }
};

#endif