#include <iostream>
using namespace std;
int XX_MARKER_XX;


class EggCartons{
public:
    int minCartons(int n){
        int res=0;
        while (n>=8){
            if (n%8==0){
                return res+n/8;
            }else {
                res=res+1;
                n=n-6;
            }
        }
        if (n==6){
            return res+1;
        }else if (n==0){
            return res;
        }else {
            return -1;
        }


    }

};
