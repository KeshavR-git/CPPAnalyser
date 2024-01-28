#include <iostream>
#include <vector>
using namespace std;


class CircularLine {

public:

    /**
     * 
     * @param t, stations with travel time. t has between 3 and 50 elements, where each elements between 1 and 1000
     * @return maximal possible fastest travel time between any 2 stations
     */
    int longestTravel(vector<int> t) {

        int size = t.size();
        if (size < 3 || size > 50) return -1;

        int res = 0;

        int i, j;
        for (i = 0; i < size - 1; i++) {

            int currentmin = 0;
            for (j = i + 1; j < size; j++) {

                int distance = 0;

                // clockwise
                int k;
                for (k = i; k < j; k++) {
                    if (t[k] < 1 || t[k] > 1000) return -1;
                    distance += t[k];
                }
                
                currentmin = distance;

                // anti-clockwise
                distance = 0;
                for (k = j; k < i + size; k++) {
                    if (t[k % size] < 1 || t[k % size] > 1000) return -1;
                    distance += t[k % size];
                }
                if (distance < currentmin) currentmin = distance;
                if (currentmin > res) res = currentmin;
            }
        }

        return res;
    }
};