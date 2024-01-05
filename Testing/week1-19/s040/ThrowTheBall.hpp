#include <string>
#include <iostream>
#include <algorithm>
#include <math.h>  
#include <vector>   
using namespace std;
int XX_MARKER_XX;


class ThrowTheBall{

public:
    int timesThrown(int N, int M, int L){
        int counter[N];
        int Current_pos=1;
        for(int i=0;i<N;i++){
            counter[i]=0;
        }
        //int counter[N]={0};
        int throws=0;
        int max=1;
        while(max>0){
            counter[Current_pos-1]++;
            throws++;
            if(counter[Current_pos-1]==M){
                max=-1;
            }
            if(counter[Current_pos-1]%2==0){
                Current_pos=Current_pos+L;
            }
            else{
                Current_pos=Current_pos-L;
            }
            if(Current_pos<1){
                Current_pos=N+Current_pos;
            }
            if(Current_pos>N){
                Current_pos=Current_pos-N;
            }
           
        }

        return throws-1;

        
    }

};