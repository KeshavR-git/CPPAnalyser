#include <iostream> 
#include <iostream> 
#include <vector> 
#include <string> 
#include <algorithm> 
using namespace std; 

class AzimuthMonitoring
{
    public: 
    int getAzimuth(vector<string> & instructions)
    {
        std::vector<std::string> input; 
        input = instructions; 
        std::cout<<"Input size: "<<input.size()<<std::endl;
        int total=0; 
        std::string temp; 
         for(int i=0;i<input.size();i++)
        {
            temp = input[i]; 
            if(input[i]=="RIGHT")
            {
                total = total + 90; 
            }
            else if(input[i]=="LEFT")
            {
                total = total-90; 
                /*if(total<0)
                {
                    total = 360-total; 
                }*/ 
            }
            else if(input[i]=="TURN AROUND")
            {
                total = total+180; 
            }
            else if(input[i]=="HALT")
            {
                return total;
            }

             if(input[i].size()>5&&input[i].size()<10)
            {
                std::string firstWord; 
                int number; 
                firstWord = input[i].substr(0,input[i].find(" ")); 
                number = stoi(input[i].substr(input[i].find(" ")+1));
                if(firstWord =="LEFT")
                {
                    total = total-number; 
                    /* if(total<0)
                    {
                        total= 360-total; 
                    }*/
                } 
                else if(firstWord=="RIGHT")
                {
                    total = total+number; 
                    /* if(total>360)
                    {
                        total = total-360; 
                    }*/ 
                }
                
            }; 
            

                if(total>359)
                {
                     total = total-360; 
                }
                else if(total<0)
                {       
                     total = total+360; 
                }
                
        }







        return total; 
    }
}; 