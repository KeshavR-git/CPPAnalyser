using namespace std;
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
int XX_MARKER_XX;

class PartySeats {
  public:
    vector<string> seating(vector<string> attendees){
      //cout << "Running" << endl;
      vector<string> orderBoys = {};
      vector<string> orderGirls = {};
      std::sort(attendees.begin(), attendees.end());
      if(attendees.size() < 4){
        //cout << "Not enough attendees to alternate" << endl;
        return {};
      }

      // count boys and girls
      int boys = 0;
      int girls = 0;

      // Split the strings up into vectors
      for(int i = 0; i < attendees.size(); i++){
        int found = attendees[i].find(' ');

        if(attendees[i].substr(found+1, attendees[i].length()) == "boy"){
          boys++;
          orderBoys.push_back(attendees[i].substr(0, found));
        } else if(attendees[i].substr(found+1, attendees[i].length()) == "girl"){
          girls++;
          orderGirls.push_back(attendees[i].substr(0, found));
        }
      }

      // Check its possible to order with the numbers of boys and girls
      if(boys != girls){
        cout << "Does not equal" << endl;
        return {};
      }

      vector<string> order;
      order.push_back("HOST");
      sort(orderBoys.begin(), orderBoys.end());
      sort(orderGirls.begin(), orderGirls.end());

      // counts
      int boyCount = 0;
      int girlCount = 0;

      // Iterate through, the ith element that cleanly divides by 2 is always a boy.
      for(int i = 1; i < attendees.size() + 2; i++){
        if(i == (attendees.size() / 2) + 1){
          order.push_back("HOSTESS");
        } else if(i % 2 == 0){
          if(boyCount < orderBoys.size()){
            // Place a boy here
            order.push_back(orderBoys.at(boyCount));
            boyCount++;
          } else return {};
        } else {
          if(girlCount < orderGirls.size()){
            order.push_back(orderGirls.at(girlCount));
            girlCount++;
          } else return {};
        }
      }
      return order;
    }
};