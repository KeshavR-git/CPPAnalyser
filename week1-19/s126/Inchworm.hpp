#include <iostream>
using namespace std;
#ifndef INCHWORM_H
#define INCHWORM_H



class Inchworm {
public:
    int lunchtime(int branch, int rest, int leaf) {
        int result = 0;
        if (branch < 1 || branch > 1000000 || rest < 1 || rest > 1000 || leaf < 1 || leaf > 1000) {
            cout << "invalid input" << endl;
            return 0;
        }
        
        for (int wormPos = 0; wormPos <= branch; wormPos+=rest) {
//            cout << "val: " << val << endl;
//            cout << val << endl;
//            cout << wormPos << endl;
            if (wormPos % leaf == 0) {
                result++;
            }
        }
        
        return result;
    }
};

#endif
