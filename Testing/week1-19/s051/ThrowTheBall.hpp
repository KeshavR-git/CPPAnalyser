#include <iostream>
#include <vector>
#include <math.h>
using namespace std;
int XX_MARKER_XX;

class ThrowTheBall
{
    public:
    int timesThrown(int N, int M, int L)
    {
        vector<int> circle;
        for(int i=0;i<N;i++)
        {
            circle.push_back(0);
        }
        circle[0]=1;
        int position=0;
        int counter=0;
        while(circle[position]<M)
        {
            
            if(circle[position]%2==0)
            {
                if(position+L>4)
                {
                    position=position+L-N;
                }
                else
                {
                    position=position+L;
                }
            }
            
            else
            {
                
                if(position-L<0)
                {
                    position=position-L+N;
                }
                else
                {
                    position=position-L;
                }
            }
            circle[position]++;
            counter++;
        }
        return counter;
    }
};
