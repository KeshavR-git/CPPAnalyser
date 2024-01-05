#include <iostream>
#include <string>
int XX_MARKER_XX;

//seeing if this fixes it.jpg
class Inchworm{
    public:
    int lunchtime(int branch, int rest, int leaf)
        {
    int counter = 0, temp = 0, solution = 0;
    
    while (temp<branch)
    {
        temp = counter * leaf;
        counter++;
        if (temp%rest == 0)
        {
            solution++;
        }
    }
    
    return solution;
}

};

