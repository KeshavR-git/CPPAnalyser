#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <cctype>
#include <cstdlib>
using namespace std;
int XX_MARKER_XX;
// Not all includes may be used, just default practice

class EggCartons {
public:
    int minCartons(int n) {
        int cartons = 0, sixMult = 0;
        
        // Base Case
        if ((n % 2 != 0 || n < 11) && (n != 6 && n != 8)) {
            return -1;
        }
        // No. sixes needed calc
        if (n % 8) {
            sixMult += 4 - ((n % 8)/2);
        }
        // Final Formula
        n = n - (sixMult * 6);
        cartons = sixMult + (n/8);
        
        return cartons;
    }
};
