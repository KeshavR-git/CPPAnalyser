#include <iostream>
#include <vector>
using namespace std;


class CircularLine {
public:
  int longestTravel(vector<int> t) {
    int maxTime = 0;
    for (int i = 0; i < t.size(); i++) {
      for (int j = i+1; j < t.size(); j++) {
        //cout << i << " " << j << endl;

        // UP
        int upT = 0;
        int pos = i;
        while (pos != j) {
          upT += t[pos];
          pos++;
        }
        //cout << "upT: " << upT << endl;

        // DOWN
        int downT = 0;
        pos = i;
        while (pos != j) {
          pos--;
          if (pos < 0) {
            pos = t.size()-1;
          }
          downT += t[pos];
        }
        //cout << "downT: " << downT << endl;
        if (upT < downT) {
          if (maxTime < upT) {
            maxTime = upT;
            //cout << "maxTime: " << maxTime << endl;
          }
        } else {
          if (maxTime < downT) {
            maxTime = downT;
            //cout << "maxTime: " << maxTime << endl;
          }
        }
      }
    }
    return maxTime;
  }
};
