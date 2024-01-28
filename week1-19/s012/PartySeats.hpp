#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;


class PartySeats
{
    public:
    vector<string> seating(vector<string> attendees)
    {
        vector<string> boy, girl, res;
        string gender, host, hostess, name;
        int attendance, counter;

        host = "HOST";
        hostess = "HOSTESS";
        counter = 0;
        attendance = attendees.size();

        if (attendance <= 3 || attendance % 2 != 0) {
            return res;
        }
        
        for (int i = 0; i < attendance; i++) {
            name = attendees[i].substr(0, attendees[i].find(' '));
            gender = attendees[i].substr(attendees[i].find(' ') + 1);
            
            if (gender == "boy") {
                boy.push_back(name);
            } else if (gender == "girl") {
                girl.push_back(name);
            }
        }

        sort(boy.begin(), boy.end());
        sort(girl.begin(), girl.end());

        if (boy.size() != girl.size() || boy.size() % 2 != 0 || girl.size() % 2 != 0) {
            return res;
        }

        res.push_back(host);

        for (int i = 0; i < boy.size()/2; i++) {
            res.push_back(girl[i]);
            res.push_back(boy[i]);
            counter++;
        }

        res.push_back(hostess);

        for (int j = counter; j < boy.size(); j++) {
            res.push_back(boy[j]);
            res.push_back(girl[j]);
        }

        return res;
    }
};