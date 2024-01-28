 #include <iostream>
#include <string>
#include <vector>
#include <cstdio>
using namespace std;

 
class AzimuthMonitoring {
	public:

		bool test(const string &x, const string &y) {
  if (x.size() < y.size()){
    return false;
  }
  for (int i=0; i<(int)y.size(); ++i){
    if (x[i] != y[i]){
      return false;
    }
  return true;
}
}

int getAzimuth(vector <string> instructions) {
    int val = 0;
    int a;
    for (int i=0; i<(int)instructions.size(); i++){
      if (instructions[i] == "HALT"){
        break;
      }
      else if (instructions[i] == "RIGHT"){
        val = val + 90;
      }
      else if (instructions[i] == "LEFT"){
        val = val - 90;
      }
      else if (instructions[i] == "TURN AROUND"){
        val = val + 180;
      }
      else if (test(instructions[i], "LEFT")) {



        sscanf(instructions[i].c_str(), "LEFT %d", &a); //returns number of arguments successfully assigned 
        val = val - a;
      } else {
        sscanf(instructions[i].c_str(), "RIGHT %d", &a); //%d = output as signed decimal
        val = val+  a;
      }
  }
    return (val + 36000) % 360; //mathematical formula to keep the returned values within that positive 360 range. 
  }
};

//   int main(){
//    cout << getAzimuth(vector <string> {"RIGHT"}) << endl;

//    cout << getAzimuth(vector <string> {"LEFT", "LEFT", "TURN AROUND"}) << endl;

//    cout << getAzimuth(vector <string> {"LEFT 5", "RIGHT 10", "LEFT 15", "RIGHT 20", "LEFT 25", "RIGHT 30", "LEFT 35", "RIGHT 40"}) << endl;

//    cout << getAzimuth(vector <string> {"RIGHT 59", "RIGHT", "RIGHT", "HALT", "LEFT", "LEFT", "LEFT"}) << endl;

//    cout << getAzimuth(vector <string> {"TURN AROUND", "HALT", "LEFT 5", "HALT", "LEFT 5", "HALT"}) << endl;

//    cout << getAzimuth(vector <string> {"LEFT", "LEFT", "LEFT", "LEFT", "LEFT", "HALT"}) << endl;
// }