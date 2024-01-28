#include <iostream>
#include <algorithm>
#ifndef eggcartons_hpp
#define eggcartons_hpp


class EggCartons
{
    public:
    //determine the minimum amount of 6s and 8s to get exactly n
    int minCartons(int n)
    {
        //checking constraints
        if(n>=1 && n<=100){
            if(n%2==1 || n<6)
            {
                // if n is odd or less than 6, you can not achieve it so returns -1
                return -1;
            }
            else if(n==6 || n==8)
            {
                // if n is 6 or 8 it is exactly 1 carton, so returns 1
                return 1;
            }
            else
            {
                //initialising new variables for the purpose of recursion to try to get to n=6, n=8 or n<6
                int egg6 = minCartons(n-6);
                int egg8 = minCartons(n-8);

                //if statemets to return depending on results of recursion
                // if both egg6 and egg8 return valid numbers
                if(egg6!=-1 && egg8!=-1){
                    //returns the minimum amount of recursions+1 that was removed from recursion
                    return std::min(egg6, egg8)+1;
                }
                //if only egg6 returns non-negative
                else if(egg6!=-1 && egg8==-1){
                    //returns the amount of recursions+1 that was removed from recursion
                    return egg6+1;
                }
                //if only egg8 returns non-negative
                else if(egg8!=-1 && egg6==-1){
                    //returns the amount of recursions+1 that was removed from recursion
                    return egg8+1;
                }
                //if neither recursions return valid
                else{
                    return -1;
                }
            }
        }
        else{
            return -1;
        }
    }
};

#endif;