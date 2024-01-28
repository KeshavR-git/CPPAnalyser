#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
using namespace std;


class PartySeats
{
  public:
  vector<string> seating(vector<string> attendees)
  {
    //initialise string for results & save length of input
    vector<string> v = {};
    int length = attendees.size();

    //check for correct length & even-ness
    if(length < 4){
      return v;
    }
    if(length % 4 != 0){
      return v;
    }

    //divide into girls and boys (trim identifier here)
    vector<string> boys = {};
    vector<string> girls = {};

    for (int i = 0; i < length; i++){
    //split string into name and gender

      istringstream iss(attendees.at(i));
      string name;
      string gender;

      getline(iss, name, ' ');
      getline(iss, gender, ' ');

      if (gender == "girl")
      {
        girls.push_back(name);
      } else {
        boys.push_back(name);
      }
    }

    //check girl-list and boy-list for equal length
    if (girls.size() != boys.size()){
      return v;
    }

    //sort lists alphabetically
    sort(boys.begin(), boys.end());
    sort(girls.begin(), girls.end());

    //push host
    v.push_back("HOST");

    //push girl, boy, girl, boy until 1/2 finished
    string temp;

    while(girls.size() > (length/4)){
      //girl
      temp = girls.front();
      girls.erase(girls.begin());
      v.push_back(temp);
      //boy
      temp = boys.front();
      boys.erase(boys.begin());
      v.push_back(temp);
    }



    //push hostess
    v.push_back("HOSTESS");

    //push boy, girl, boy, girl, until all finished
   while(girls.size() > 0){

    //boy
    temp = boys.front();
    boys.erase(boys.begin());
    v.push_back(temp);

   //girl
    temp = girls.front();
    girls.erase(girls.begin());
    v.push_back(temp);
  }


    //return the sorted vector
    return v;
  }
};
