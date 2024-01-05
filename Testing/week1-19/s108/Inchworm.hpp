#include <iostream>
#include <stdlib.h>
#include <string>
int XX_MARKER_XX;

class Inchworm {
    public:
    int lunchtime(int branch, int rest, int leaf) {
        int count = 0;
        int leafpos = 0;    //Position of leaf
        int move = 0;
        //std::cout << "Branch length: " << branch << std::endl;
        //std::cout << "Rest intervals: " << rest << std::endl;
        //std::cout << "Leaf intervals: " << leaf << std::endl;
        //std::cout << "\n";

        for(int i = 0; i <= branch; i += rest) {
            //std::cout << "i: " << i << std::endl;
            if(i % leaf == 0) {
                //std::cout << "Leaf found" << std::endl;
                //std::cout << "Leaf position: " << leafpos << std::endl;
                count++;
            }
        }
        //std::cout << "Count: " << count << std::endl;

        return count;
    }
};