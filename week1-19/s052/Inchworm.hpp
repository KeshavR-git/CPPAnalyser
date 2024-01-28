#include <iostream>
using namespace std;

class Inchworm {

public:

    /**
     * 
     * @param branch length of the branch, between 1 and 1000000
     * @param rest the distance traveled by the inchworm between rests, between 1 and 1000
     * @param leaf the distance between each consecutive pair of leaves, between 1 and 1000
     * @return number of leaves the inchworm will consume
     */
    int lunchtime(int branch, int rest, int leaf) {

        if (branch < 1 || branch > 1000000 || rest < 1 || rest > 1000 || leaf < 1 || leaf > 1000) return -1;

        int res = 1;    // 0 is automatically counted
        int curr;

        for (curr = rest; curr <= branch; curr += rest) if (!(curr % leaf)) res++;

        return res;
    }
};