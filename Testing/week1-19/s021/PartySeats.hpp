#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <sstream> 
int XX_MARKER_XX;

class PartySeats
{
public:
    std::vector<std::string> seating(std::vector<std::string> attendees)
    {
        int n = attendees.size();

        std::vector<std::string> out;

        if (n%4 != 0)
        {
            return out;
        }

        std::vector<std::string> girls;
        std::vector<std::string> boys;

        std::string name;
        std::string gender;

        for (int i=0; i<n; i++)
        {
            std::stringstream ss;
            ss << attendees[i];
            ss >> name >> gender;

            if (gender == "girl")
            {
                girls.push_back(name);
            }
            else if (gender == "boy")
            {
                boys.push_back(name);
            }
        }

        if (boys.size() != girls.size())
        {
            return out;
        }

        std::sort(girls.begin(), girls.end());
        std::sort(boys.begin(), boys.end());

        out.resize(n+2);
        out[0] = "HOST";
        for (int i=0; i<n/4; i++)
        {
            out[1 + (i*2)] = girls[i];
            out[1 + (i*2) + 1] = boys[i];
        }
        out[(n/2) + 1] = "HOSTESS";
        for (int i=n/4; i<n/2; i++)
        {
            out[2 + (i*2)] = boys[i];
            out[2 + (i*2) + 1] = girls[i];
        }
        return out;
    }
};