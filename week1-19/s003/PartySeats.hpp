#include <iostream> 
#include <string>
#include <vector>  
#include <algorithm>
using namespace std;
 
 
class PartySeats
{
  public:

    int checkGender(vector<string> attendees, char c) 
    {

      int j = 0; 
      int k = 0; 
      int length = attendees.size(); 

      while(k < length) {
        char ch = attendees[k][j];
        if(ch == ' ') {
          if(attendees[k][j+1] == c) {
            return k; 
          }
          else {
            k++; 
          }
        }
        j++; 
      }
      return -1; 
   }
        




    vector<string> seating(vector<string> attendees)
  {
    
    int length = attendees.size();
    //due to the addition of host and hostess
    int size = length + 2; 
    //sort the attendees array
    sort(attendees.begin(), attendees.end());

    vector<string> party(size);
    party[0] = ("HOST"); 
    party[length/2] = "HOSTESS";
    bool boy = true; 
    
    
    for (int i = 1; i <= size; i++) { 
      //placing someone next to the host
      if(party[i-1] == "HOST") {
        int index = checkGender(attendees, 'g'); 
        if( index != -1) {
          party[i] = attendees[index]; 
          attendees.erase(attendees.begin()+(index-1));
          boy = false; 
        }
        else {
          party.clear();
          return party; 
        }
      }

      else if(party[i-1] == "HOSTESS") {

        int index = checkGender(attendees, 'b'); 
        if( index != -1) {
          party[i] = attendees[index];
          attendees.erase(attendees.begin()+(index-1)); 
          boy = true; 
        }
        else {
          party.clear();
          return party; 
        }
      }
      else if(boy == true) {
        //insert girl 
       int index = checkGender(attendees, 'g');
          if( index != -1) {
          party[i] = attendees[index]; 
          attendees.erase(attendees.begin()+(index-1)); 
          boy = false; 
          }
          else {
            party.clear();
            return party; 
          }
      }
      else if (boy == false) {
        //insert boy
        int index = checkGender(attendees, 'b');
          if( index != -1) {
          party[i] = attendees[index]; 
          attendees.erase(attendees.begin()+(index-1)); 
          boy = true; 
          }
          else {
            party.clear();
            return party; 
         }
        }
        else {
          break; 
        }
    }
    return party; 
  }
};

