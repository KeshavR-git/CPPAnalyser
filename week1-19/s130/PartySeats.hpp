#include <sstream>
#include <vector>
#include <string>
#include <iostream>
#include <algorithm>
#include <stdlib.h>

class PartySeats
{
public:
    std::vector<std::string> seating(std::vector<std::string> attendees)
    {
        //check if the number of attendees is a multiple of 4 that is > 0
        std::vector<std::string> seatingPlan;
        if (attendees.size()%4 != 0 || attendees.size() == 0)
        {
            return seatingPlan;
        }
        //put boys and girls in seperate arrays
        std::vector<std::string> ladies;
        std::vector<std::string> gentlemen;
        std::string temp;
        int num = 0;
        for (int i = 0; i < attendees.size(); i++)
        {
            temp = attendees.at(i);
            if (temp.at(temp.length()-1) == 'y')
            {
                temp.erase(temp.end()-4,temp.end());
                gentlemen.push_back(temp);
            }
            else
            {
                temp.erase(temp.end()-5,temp.end());
                ladies.push_back(temp);
            }
        }
        //checks for even numbers of boys and girls
        if (ladies.size() != gentlemen.size())
        {
            return seatingPlan;
        }

        std::sort(ladies.begin(),ladies.end());
        std::sort(gentlemen.begin(),gentlemen.end());

        seatingPlan.push_back("HOST");
        for (int i = 0; i < ladies.size()/2; i++)
        {
            seatingPlan.push_back(ladies.at(i));
            seatingPlan.push_back(gentlemen.at(i));
        }
        seatingPlan.push_back("HOSTESS");
        for (int i = ladies.size()/2; i < ladies.size(); i++)
        {
            seatingPlan.push_back(gentlemen.at(i));
            seatingPlan.push_back(ladies.at(i));
        }
        return seatingPlan;
    }
};
