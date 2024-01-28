#include <vector>
#include <iostream>
#include <string>
using namespace std;

class PartySeats
{
    //helper functions
    bool alphabet_sort(string, vector<string>*);
    string valid_name(string);
public:
    vector<string> seating(vector<string>);
};

string PartySeats::valid_name(string s)
{
    //Detects invalid input and returns uppercase name
    if (s.length() < 1) return "INVALID";
    for(int i = 0; i < s.length(); i++)
        if (s[i] < 65 || s[i] > 90) return "INVALID";
    return s;
}

bool PartySeats::alphabet_sort(string name, vector<string> * vec)
{
    name = valid_name(name);
    if(name == "INVALID") return false;

    if (vec->size() > 0)
    {
        for (int i = 0; i < vec->size(); i++)
        {
            int cmp = name.compare(valid_name(vec->at(i)));
            //name is sorted in front of vec[i]
            if (cmp < 0)
            {
                vec->insert(vec->begin()+i, name);
                return true;
            }
        }
    }
    //if name wasn't already added, push_back
    vec->push_back(name);
    return true;
}

vector<string> PartySeats::seating(vector<string> attendees)
{
    int size = attendees.size();
    vector<string> final;

    //return empty vector for invalid input
    //if size isn't divisible by 4, then no valid seating arrangement exists
    if(size < 4 || size%4 != 0 || size > 50) return final;

    //create sorting vectors
    vector<string> boys;
    vector<string> girls;

    //sanitization & sorting boys and girls alphabetically
    for (int i = 0; i < size; i++)
    {
        bool valid = false;
        string name = attendees.at(i);

        //sort attendee into appropriate vector
        if (name.substr(name.length()-3, 3) == "boy")
        {
            valid = true;
            name = name.substr(0,name.length()-4); //clean off " boy"
            if (name == "HOST" || name == "HOSTESS") return final;
            if(name.length() > 20) return final;
            if(!alphabet_sort(name, &boys)) return final;
        }
        else if (name.substr(name.length()-4, 4) == "girl")
        {
            valid = true;
            name = name.substr(0,name.length()-5); //clean off " girl"
            if (name == "HOST" || name == "HOSTESS") return final;
            if(name.length() > 20) return final;
            if (!alphabet_sort(name, &girls)) return final;
        }
        if (!valid) return final;
    }

    //if number and boys and girls aren't equal, return
    if(boys.size() != girls.size()) return final;

    //use to find hostess location and do correct iteration of the boy/girl vectors
    int insertCounter = size/2;

    //build final vector
    final.push_back("HOST");
    for (int i = 0; i < insertCounter/2; i++)
    {
        final.push_back(girls.at(i));
        final.push_back(boys.at(i));
    }
    final.push_back("HOSTESS");
    for (int i = insertCounter/2; i < insertCounter; i++)
    {
        final.push_back(boys.at(i));
        final.push_back(girls.at(i));
    }

    return final;
}
