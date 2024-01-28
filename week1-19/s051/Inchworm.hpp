#include <iostream>
using namespace std;

class Inchworm
{
    public :
    int lunchtime(int branch, int rest, int leaf)
    {
        int result=0;
        int travel=0;
        while(travel<=branch)
        {
            if(travel%leaf==0)
            {
                result++;

            }
            travel=travel+rest;
        }
        
        return result;
    }
};
