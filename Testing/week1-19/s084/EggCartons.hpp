#include <iostream> 
using namespace std; 
int XX_MARKER_XX;

class EggCartons
{
    public: 
    int minCartons(int n) //number of eggs
    {
        int counter = 0; 
        int temp;
        int tempNum;
 
        if(n<6||n>100) //n<100, n>0
        {
            return -1; 
        }
        else if(n<=10)
        {
            if(n%6==0||n%8==0)
            {
                return 1; 
            }
            return -1; 
        }
        else if(n%2!=0)
        {
            return -1; 
        }
        else
        {
            temp = n; 

            if(temp%8==0&&temp%6==0) // case where it's zero for both 
            {
            if(temp/8>temp/6)
            {
                counter = counter+(temp/6); 
            }
            else if(temp/8<temp/6)
            {
                counter = counter+(temp/8); 
            }
            }
            else if(temp/8>temp/6 || temp/6>temp/8)
            {
                while(temp!=0&&temp%8!=0)
                {
                counter++; 
                temp=temp-6;
                } 
                if(temp!=0)
                {
                    counter = counter + temp/8; 
                }
            }
            else{ //case where there's one section with remainders that fit in the remainder=8 or remainder=6
            if(temp%6==8)
            {
                temp = temp-8; 
                counter++; 
            }
            tempNum = temp/6; 
            counter= counter + tempNum; 
            }
            
        }

        return counter; 
    }

}; 
