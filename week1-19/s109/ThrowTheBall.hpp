#include <iostream>
using namespace std;

class ThrowTheBall{
    public:
    int timesThrown(int N,int M,int L){
        int res=0;
        int player[N-1];
        for(int i =0;i<N;i++){
            player[i]=0;
            player[0]=1;
            

        }
        int num=1;
        while(player[num-1]<M){
            if(player[num-1]%2==0){
                num+=L;
            }
            else {
                num-=L;
            }
            if(num>N){
                num-=N;
            }
            else if (num<1){
                num+=N;
            }
            int sum=player[num-1];
            player[num-1]=sum+1;
            res++;

        }
        return res;
       
    }
    
};