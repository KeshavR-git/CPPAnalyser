#include <iostream> 
#include <vector> 
#include <string> 
#include <algorithm> 
using namespace std; 


class PartySeats
{
    public: 
    vector <string> seating(vector<string> & attendees)
    {
        vector<string> arrangments; 
        vector<string> boys; 
        vector<string> girls; 
        //vector<string> none;
        //arrangments = attendees; 
        int lengthVect = attendees.size(); 
        std::string ending; 
        std::string name; 
        //odd numbers and less then 4

        if(lengthVect%2!=0||lengthVect<4)
        {
            return arrangments;

        }
        else
        {
            //sorting boys and girls 
            for(int i=0;i<lengthVect;i++)
            {
                ending = attendees[i]; 
                ending = ending.back(); 
                name = attendees[i].substr(0,attendees[i].find(" ")); 

                 if(ending=="y")
                {
                    boys.push_back(name); 
                }
                else if(ending=="l")
                {
                    girls.push_back(name); 
                }
            }
            //ending = "BENJAMIN boy"; 
            //std::cout<<"Ending: "<<ending.substr(0,ending.find(" "))<<std::endl; 
            
            //after sorting out the names
            //if the list is not equal, this will not work
            std::sort(boys.begin(),boys.end()); 
            std::sort(girls.begin(),girls.end());
            int store; 
            store = boys.size()/2; 
            int inputHostess = 2; 

            /* for(int i=0;i<boys.size();i++)
            {
                std::cout<<boys[i]<<std::endl; 
            }*/ 
            if(boys.size()!=girls.size()|| boys.size()==3)
            {
                return arrangments; //not correct 
            }
            else 
            {
                int counterBoys =0; 
                int counterGirls= 0; 
                int newLength = attendees.size()+2; 
                int putHostess = newLength/2; 

                arrangments.push_back("HOST");
                 

                  for(int i=1;i<(newLength);i++)
                {
                    if(arrangments.size()==putHostess)
                    {
                        arrangments.push_back("HOSTESS"); 
                    }
                    else if(i%2==0)
                    {
                       // arrangments[i]=boys.at(counter); 
                       arrangments.push_back(boys[counterBoys]);
                       std::cout<<"BOYS: " <<boys[counterBoys]<<std::endl; 
                       counterBoys++; 
                    }
                    else if(i%2!=0)
                    {
                        arrangments.push_back(girls[counterGirls]); 
                        counterGirls++;
                    }
                }
        }
       /*  for(int i=0;i<boys.size();i++)
        {
            std::cout<<"BOYS:"<<boys[i]<<std::endl;
        }*/ 
        /*  for(int i=0;i<arrangments.size();i++)
        {
            std::cout<<"THIS: "<<arrangments[i]<<std::endl; 
        } */ 


       return arrangments; 
    }
    }

}; 
