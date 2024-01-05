#include <iostream>
using namespace std;
int XX_MARKER_XX;

class ThrowTheBall{
    public:

   int timesThrown(int N, int M, int L){

        int *friends= new int[N];
        for( int i = 0; i < N; i++){
            friends[i] = 0;
        }

        int counter = 0;
        int x = 0;

        //player one recieves the ball
        friends[x] = 1;

        int y=0;
        while (friends[x] != M){
            //if even go left
            if(friends[x] % 2 == 0){
                y = x + L;
                if(y >= N){ 
                    y=y - N;
                    }
                friends[y] +=1;
                counter++;
               
            }
            //if odd go right 
            if(friends[x] % 2 != 0){
                y = x - L;
                if(y < 0){ 
                    y=y + N;
                    }
                friends[y] +=1;
                counter++;
            }
               
            x=y;
        }     
        delete[] friends;
        return counter;
    }
};
