#include <iostream>
#include <string>
#include <vector>
using namespace std;

 
 
class DownloadingFiles
{
  public:
  double actualTime(vector<string> tasks) 
  {
    vector<double> remain_times;
    vector<double> speeds;
    string this_speed="";
    string this_time="";
    int int_temp;
    double actualTime=0;
    double new_speed=0;
    double new_time=0;
    double min_speed=0;
    double outgoing_time=0;

    for (int i = 0; i < tasks.size(); i++) {
      int_temp = tasks[i].find(" ");
      this_speed = tasks[i].substr(0, int_temp);
      this_time = tasks[i].substr(int_temp+1, tasks[i].length()-1);
      speeds.push_back(stoi(this_speed));
      remain_times.push_back(stoi(this_time));
    }
    int min_i;

    while (remain_times.size() > 0) {

      min_i = find_min(remain_times);
      min_speed = speeds[min_i];
      outgoing_time = remain_times[min_i];
      actualTime += outgoing_time;
      remain_times.erase(remain_times.begin()+min_i);
      speeds.erase(speeds.begin()+min_i);

      for (int i = 0; i < remain_times.size(); i++) {
        new_speed = speeds[i] + (min_speed / speeds.size());
        new_time = (remain_times[i] - outgoing_time) * speeds[i] / new_speed;
        remain_times[i] = new_time;
        speeds[i] = new_speed;
      }

    } 


    return actualTime;
  }

  int find_min(vector<double> input) { //finds the index of the min, not the actual value
    int min = 0;
    for (int i = 0; i < input.size(); i++) {
      if (input[i] < input[min]) {
        min = i;
      }
    }
    return min;
  }

};

