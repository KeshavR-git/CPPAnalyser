#include <iostream>
using namespace std;

#define A 6
#define B 8


class EggCartons{

public:

    /**
     * 
     * @param n number of required eggs, between 1 and 100
     * @return number of minimum cartons
     */
    int minCartons(int n) {

        if (n < 1 || n > 100 || n % 2) return -1;

        int x = 0;  // number of cartons with 6 eggs
        int y = n / B + 1;  // number of cartons with 8 eggs

        while ((A * x + B * y) != n) {
            y--;
            if (y < 0) return -1;
            while ((A * (x + 1) + B * y) <= n) x++;
        }

        return x + y;
    }
};