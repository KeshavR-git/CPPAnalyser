#include <iostream>
#include <string>
#include <vector>
using namespace std;
int XX_MARKER_XX;

class PartySeats
{
    public:
    string[] seating(string[] attendees)
    {
        vector<string> host;
        vector<string> hostess;
        
        for(int i=0;i<attendees.length();i++)
        {
            string name="";
            string current;
            current = attendees[i];
            string gender;
            int name_digits=0;
            int j=0;
            while(current[j]!=' ')
            {
                name_digits++;
            }
            
            for(int k=0;k<name_digits;i++)
            {
                name=name+current[i];
            }
            
            for(k=name_digits+1;k<current.length();k++)
            {
                gender=hender+current[i];
            }
            
            if(gender=="boy")
            {
                host.push_back(name);
                
            }
            else
            {
                hostess.push_back(name);
            }
        }
    }
}
