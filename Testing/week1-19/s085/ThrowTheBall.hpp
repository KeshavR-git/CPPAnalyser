#include <iostream>
#include <vector>
using namespace std;
int XX_MARKER_XX;
#ifndef THROWTHEBALL_H
#define THROWTHEBALL_H




class ThrowTheBall {
	
public:
    int timesThrown(int N, int M, int L) {
        int result = 0;
        if(N < 3 || N > 50 || M < 1 || M > 50 || L < 1 || L > N - 1) {
            cout << "invalid input" << endl;
        }
        int i=0, ans=0;
        vector<int> times;
        for(int i=0; i<N; ++i)
            times.push_back(0);
        
        while(true){
            ++times[i];
            if(times[i]>=M)
                return ans;
            
            //pass
            ++ans;
            if(times[i]%2==0){
                i = (i - L);
                if(i<0)
                    i += N;
            }
            else
                i = (i + L)%N;
        }
    }
};

#endif
