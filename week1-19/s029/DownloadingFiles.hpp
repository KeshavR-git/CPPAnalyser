#include <iostream>
#include <string>
#include<vector>
using namespace std;
class DownloadingFiles
{
  public:
    double actualTime(vector<string> tasks){
      double speed=0;
      double totalsize=0;
      for(int i=0;i<tasks.size();i++){
        double position=tasks[i].find(' ');
        double net_speed=stoi(tasks[i].substr(0,position));
        speed=speed+net_speed;
        double time=stoi(tasks[i].substr(position+1,tasks[i].length()-position-1));
        double file_size=time*net_speed;
        totalsize=totalsize+file_size;
      }
      return totalsize/speed;
    }
};
