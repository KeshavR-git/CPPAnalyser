#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int XX_MARKER_XX;
 
class DownloadingFiles
{
  public:
  vector<string> split(string phrase, string delimiter){
    vector<string> list;
    string s = phrase;
    size_t pos = 0;
    string token;
    while ((pos = s.find(delimiter)) != string::npos) {
        token = s.substr(0, pos);
        list.push_back(token);
        s.erase(0, pos + delimiter.length());
    }
    list.push_back(s);
    return list; 
  }
  double actualTime(vector<string> tasks)
  {
    
    double timeNeed[tasks.size()];
    double speed[tasks.size()];
    for (int i = 0; i < tasks.size(); ++i)
    {
      vector<string> v;
      v=split(tasks[i]," ");
      speed[i] = std::stod(v[0]);
      timeNeed[i] = std::stod(v[1]);
    }
    for (int i = 0; i < tasks.size(); ++i)
    {
      for (int j = 0; j < tasks.size(); ++j)
      {
        if (timeNeed[i]<timeNeed[j])
        {
          swap(speed[i],speed[j]);
          swap(timeNeed[i],timeNeed[j]);
        }
        else if (timeNeed[i]==timeNeed[j])
        {
          if (speed[i]<speed[j])
          {
            swap(speed[i],speed[j]);
            swap(timeNeed[i],timeNeed[j]);
          }
        }
      }
    }
    double res = timeNeed[0];
    double timeN = timeNeed[0];
    double speedd = speed[0];
    for (int i = 1; i < tasks.size(); ++i)
    {
      speedd += speed[i];
      timeN = timeNeed[i]-res;
      res += timeN*speed[i]/speedd;
    }
    return res; 
  }
};
