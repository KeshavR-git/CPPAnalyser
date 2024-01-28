#include <vector>
#include <iostream>
#ifndef THROWTHEBALL_H
#define THROWTHEBALL_H


class ThrowTheBall {
public:
    int timesThrown(int N, int M, int L) {
        std::vector<int> vec(N);
        int pos = 0;
        int throws = 0;
        vec[pos] = 1;
        while (vec[pos] < M) {
            if (vec[pos] % 2 == 0) {
                pos -= L;
            } else {
                pos += L;
            }
            pos = (pos+N)% N;
            std::cout << pos << std::endl;
            vec[pos] += 1;
            throws += 1;

        }
        return throws;
    }
};

#endif
