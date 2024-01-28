#include <string>
#include <vector>
#include<algorithm>
using namespace std;
class PartySeats
{
  public:
  vector<string> seating(vector<string> attendees ){
      vector<string> empty;
    if(attendees.size()%4!=0 || attendees.size()==0){
      return empty;
    }
    vector<string> boy;
    vector<string> girl;
    vector<string> result;
    int boynumber=0;
    int girlnumber=0;
    for(int i=0;i<attendees.size();i++){
      int position=attendees[i].find(' ');
      string name=attendees[i].substr(0,position);

      string gender=attendees[i].substr(position+1,attendees[i].length()-position-1);
      if(gender=="boy"){
        boynumber++;
        boy.push_back(name);
      }else{
        girlnumber++;
        girl.push_back(name);
      }
    }
    if(boynumber!=girlnumber){
      return empty;
    }
    std::sort(boy.begin(), boy.end());
    std::sort(girl.begin(), girl.end());
    result.push_back("HOST");
    for(int i=0;i<attendees.size()/2;i++){
      if(i==attendees.size()/4){
        result.push_back("HOSTESS");
      }
      if(i<attendees.size()/4){
        result.push_back(girl[i]);
        result.push_back(boy[i]);
      }else{
        result.push_back(boy[i]);
        result.push_back(girl[i]);
      }
    }
    return result;
  }
};
