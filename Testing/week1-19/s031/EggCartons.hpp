#include <iostream>
#include <string>
int XX_MARKER_XX;

class EggCartons{
    public:
    int minCartons(int eggs)
        {
        int temp = eggs/8;
        int remainder = eggs%8;
        
        while (remainder > 0 && temp > 0)
        {
            if (remainder%2==1)
            {
                temp =-1;
            }
            
            if(remainder%6==0)
            {
                temp = temp +  (remainder/6);
                remainder = 0;
            }
            
            else
            {
                temp=temp-1;
                remainder = remainder +8;
            }
        }
        if(remainder%6 ==0 )
        {
              temp = temp +  (remainder/6);
        }
        if (temp <= 0)
        {
            temp = -1;
        }
        
        return temp;
    }

};
