#include <iostream>
#include <string>
using namespace std;
int XX_MARKER_XX;


class EggCartons{
    public:
    int minCartons(int n){
        int count = -1;
        for(int i=0;i<=(n/8);i++){
            for(int j=0;j<=(n/6);j++){
                if((8*i+6*j)==n){
                    count=i+j;
                }
            }
        }
        return count;
    }
};