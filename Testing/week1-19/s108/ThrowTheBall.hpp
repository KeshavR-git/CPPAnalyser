#include <iostream>
#include <stdlib.h>
#include <vector>
int XX_MARKER_XX;

std::ostream &operator<<(std::ostream &o, std::vector<int> v){  //Print vector
    for (auto x: v) o << x;
    return o;
}

class ThrowTheBall {
    public:
    int timesThrown(int N, int M, int L) {
        //std::cout << N << " players, " << "M: " << M << ", L: " << L << std::endl;
        //std::cout << "\n";

        if(M == 1) {
            return 0;
        }

        int count = 0;
        int pos = 0;    //Keep track of position
        int players[N];
        for(int i = 0; i < N; i++) {
            players[i] = 0;
        }
        players[0] = 1;
        
        while(true) {
            //std::cout << "Pos: " << pos << ", " << players[pos] << std::endl;
            if(players[pos] % 2 == 0) {  //If even, move left
                pos -= L;
                while(pos < 0) {
                    pos += N;
                }
            }
            else {
                pos += L;
                while(pos > N) {
                    pos -= N;
                }
            }
            players[pos]++;
            count++;
            if(players[pos] == M) {
                return count-1;
            }
        }

        return count;
    }
};