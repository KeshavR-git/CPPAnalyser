#include <iostream>
#include <stdlib.h> 
using namespace std;
#ifndef INCHWORM_HPP
#define INCHWORM_HPP
 
class Inchworm
{
    private:
        int gcd(int rest, int leaf)
        {
            if(leaf == 0)
        {
            return rest;
        }
        else
        {
            return gcd(leaf, rest % leaf);
        }
    }
    public:
        int lunchtime(int branch, int rest, int leaf)
        {
            int LCM = abs(rest*leaf)/gcd(rest,leaf);
            int result = (branch/LCM)+1;
            return result;
        }
};
#endif