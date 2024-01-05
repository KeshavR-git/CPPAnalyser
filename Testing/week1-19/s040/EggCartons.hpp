#include <string>
#include <iostream>
#include <algorithm>
#include <math.h>     
using namespace std;
int XX_MARKER_XX;


class EggCartons{

public:
    int minCartons(int n){
        float m=((float)n/(float)8);
        int res=0;
        if((n%2==0) && (n>=6) && n!=10)
        {
            if(m==int(n/8)){
                res=n/8;
            }
            else{
                res=ceil(m);
            }
        }
        else 
        {
            res=-1;
        }
    return res;
    }
};