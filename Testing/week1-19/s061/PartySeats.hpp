#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <sstream>
using namespace std;
int XX_MARKER_XX;
#ifndef partyseats_hpp
#define partyseats_hpp



class PartySeats
{
    public:
        // main method that accepts string and returns a reorganised string
        vector<string> seating(vector<string> attendees)
        {
            //initialise strings of boy names and girl names & return string
            vector<string> boy;
            vector<string> girl;
            vector<string> result;

            for(int i = 0; i<attendees.size(); i++)
            {
                // split the string at spaces into strings of names and genders
                istringstream iss(attendees[i]);
                string name;
                string gender;

                iss >> name;
                iss >> gender;

                //sorts names into boy or girl strings
                if(gender=="boy"){
                    boy.push_back(name);
                }else if(gender=="girl"){
                    girl.push_back(name);
                }
            }

            //rearranges both strings into alphabetical order
            sort(boy.begin(), boy.end());
            sort(girl.begin(), girl.end());

            //if boy and girl aren't equal and even, returns nothing
            if(boy.size() != girl.size() || boy.size()%2 == 1){
                return result;
            }

            //Inserts host to beginning of string
            result.push_back("HOST");

            //insets names in girl-boy order between host and hostess
            for(int i=0; i<boy.size()/2; i++){
                result.push_back(girl[i]);
                result.push_back(boy[i]);
            }

            //insterts hostess
            result.push_back("HOSTESS");

            //inserts remaining names into string
            for(int i=boy.size()/2; i<boy.size(); i++){
                result.push_back(boy[i]);
                result.push_back(girl[i]);
            }

            return result;
        }
};

#endif