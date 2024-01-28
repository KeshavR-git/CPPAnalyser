#include <iostream>
#include <string>
#include <vector>
using namespace std;

class StreetParking
{
    public:
        int freeParks(string street)
        {
            int counter=0;
            vector<int> position;
            for(int i=0;i<street.length();i++)
            {
                if(street[i]=='-')
                {
                    counter++;
                    position.push_back(i);
                }
            }
            for(int i=0;i<position.size();i++)
            {
                int place=position[i];
                if(place==0)
                {
                    if(street[place+1]=='S'||street[place+1]=='B' || street[place+2]=='B')
                    {
                        counter--;
                    }
                }
                
                else if(place==street.length()-1)
                {
                    if(street[place-1]=='S')
                    {
                        counter--;
                    }
                }
                
                else
                {
                    if(street[place+1]=='S'||street[place+1]=='B' || street[place+2]=='B' || street[place-1]=='S')
                    {
                        counter--;
                    }
                }
            }
            return counter;
        }
};
