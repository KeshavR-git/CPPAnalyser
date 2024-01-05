#include <iostream>
#include <string>
#include <vector>
using namespace std;
int XX_MARKER_XX;

 
 
class PartySeats
{
  public:
  vector<string> seating(vector<string> attendees) 
  {
    vector<string> boys;
    vector<string> girls;
    vector<string> list;
    int temp;
    for (int i=0; i<attendees.size(); i++) {
      temp = attendees[i].find(" ");
      if (attendees[i].back()==121) {
        boys.push_back(attendees[i].substr(0,temp));
      }
      else if (attendees[i].back()==108){
        girls.push_back(attendees[i].substr(0,temp));
      }
    }

    if (boys.size() != girls.size()) {
      return list;
    }

    if (boys.size() % 2 == 1 && girls.size() % 2 == 1) {
      return list;
    }

    boys = alpha_sort(boys);
    girls = alpha_sort(girls);

    boys.insert(boys.begin(), "HOST");
    girls.insert(girls.begin()+girls.size()/2, "HOSTESS");

    while (boys.size()>0 && girls.size()>0) {
      if (boys.size() > 0) {
        list.push_back(boys[0]);
        boys.erase(boys.begin());
      }
      if (girls.size() > 0) {
        list.push_back(girls[0]);
        girls.erase(girls.begin());
      }
      
    }


    return list;
  }

  vector<string> alpha_sort(vector<string> input) 
  {
    string temp = "";
    for (int i = 0; i<input.size()-1; i++) {
      for (int j = 0; j<input.size()-1; j++) {
        if (input[j][0] > input[j+1][0]) {
          temp = input[j];
          input[j] = input[j+1];
          input[j+1] = temp;
        }
        else if (input[j][0] == input[j+1][0]) {
          if (input[j][1] > input[j+1][1]) {
            temp = input[j];
            input[j] = input[j+1];
            input[j+1] = temp;
          }
          else if (input[j][1] == input[j+1][1]) {
            if (input[j][2] > input[j+1][2]) {
              temp = input[j];
              input[j] = input[j+1];
              input[j+1] = temp;
            }
          }
        }
      }
    }
    return input;
  }
};


/*
  vector<string> alpha_sort(vector<string> input) 
  {
    vector<string> output;
    vector<string> next_out;
    string temp_min = "z";
    int min_idx  = -1;
    while (input.size() > 0) {
      temp_min = "z";
      for (int i = 0; i<input.size(); i++) {
        if (input[i][0] < temp_min[0]) {
          temp_min = input[i];
          min_idx = i;
        }
      }
      output.push_back(temp_min);

      input.erase(input.begin() + min_idx);
    }

    return output;
  }
*/
