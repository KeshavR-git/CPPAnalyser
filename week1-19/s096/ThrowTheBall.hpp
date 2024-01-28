#include <iostream> 
using namespace std;


class ThrowTheBall{
    public:
    int timesThrown(int N, int M, int L){
        int counter = 0;
        int i=0;
        int *a = new int [N];
        for(int j=0;j<N;j++){
            a[j]=0;
        }
        a[0]=1;
        while(a[i] < M){
            counter++;
            if (a[i]%2!=0){
                i = i + L;
                if(i>N-1){
                    i = i%N;
                }
            }
            else{
                i = i - L;
                if(i<0){
                    i = i + N;
                }
            }
            a[i]++;
        };
    return counter;
    };
};