#include <iostream>
#include <stdlib.h> 
#include <string>
#include <sstream>
#include <vector>
using namespace std;
int XX_MARKER_XX;


class ThrowTheBall {
public:
    int timesThrown(int N, int M, int L){
        int pass=0;
        vector<int> players(N);
        players[0]=1;
        int i=0;
        int j=0;
        while(players[i]!=M){
            if(players[i]%2 != 0){
                 j=i+L;
                if(j >N-1){
                    i=L-(N-i);
                }else{
                    i=i+L;
                }
            }
            else if(players[i]%2 == 0){
                j=i-L;
                if(j < 0){
                    i=N-(L-i);
                }else{
                    i=i-L;
                }  

            }
            players[i]=players[i]+1;
            pass=pass+1;
        }
        return pass;
    }
};