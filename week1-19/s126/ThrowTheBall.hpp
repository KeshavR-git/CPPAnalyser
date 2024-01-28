#include <iostream>
using namespace std;
#ifndef THROWTHEBALL_H
#define THROWTHEBALL_H



class ThrowTheBall {
public:
    int timesThrown(int N, int M, int L) {
        int result = 0;
        if (N < 3 || N > 50 || M < 1 || M > 50 || L < 1 || L > N-1) {
            cout << "invalid input" << endl;
            return 0;
        }
        
        int array[N];
        int size = sizeof(array)/sizeof(array[0]);
        int pos = 0;
        
        for (int i = 0; i < N; i++) {
            array[i] = 0;
        }
        
        while (array[pos] != M) {
            array[pos]++;
            if (array[pos] == M) {
                return result;
            }
            result++;
//            cout << "pos: " << pos << endl;
//            cout << "held: " << array[pos] << endl;
            // even
            if (array[pos] % 2 == 0) {
                pos+=L;
                if (pos > N-1) {
                    pos = pos - size;
                }
            } else {
                pos-=L;
                if (pos < 0) {
                    pos = size + pos;
                }
            }
        }
        
        return result;
    }
};

#endif

