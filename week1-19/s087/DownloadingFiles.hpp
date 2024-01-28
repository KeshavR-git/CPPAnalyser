#include <string>
#include <vector>

class DownloadingFiles {
public:
  double actualTime(std::vector<std::string> tasks) {
    std::vector<double> speed;
    std::vector<double> time;
    double realTime = 0;

    //Sort vector into integer vectors
    for(int i = 0; i < int(tasks.size()); i++) {
      std::string tempSpeed = "";
      std::string tempTime = "";
      bool isSpeed = true;
      for(int j = 0; j < int(tasks[i].length()); j++) {
        if(tasks[i].at(j) == ' ') {
          isSpeed = false;
        }

        if(isSpeed == true && tasks[i].at(j) != ' ') {
          tempSpeed += tasks[i].at(j);
        }else if(isSpeed == false && tasks[i].at(j) != ' ') {
          tempTime += tasks[i].at(j);
        }
      }
      speed.push_back(std::stoi(tempSpeed));
      time.push_back(std::stoi(tempTime));
    }

    //Sort the vectors
    for(int i = 0; i < int(time.size()); i++) {
      for(int j = i; j < int(time.size()); j++) {
        if(time[j] < time[i]) {
          double temp = time[i];
          time[i] = time[j];
          time[j] = temp;

          temp = speed[i];
          speed[i] = speed[j];
          speed[j] = temp;
        }
      }
    }

    for(int i = 0; i < int(time.size()); i++) {
      realTime += time[i];
      for(int j = i+1; j < int(time.size()); j++) {
        time[j] -= time[i];
      }

      if(i != int(time.size())-1) {
        time[i+1] = time[i+1]*speed[i+1];
        speed[i+1] += speed[i];
        time[i+1] = time[i+1]/speed[i+1];
      }
    }

    // for(int i = 0; i < int(speed.size()); i++) {
    //   std::cout << speed[i] << " " << time[i] << "\n";
    // }

    return realTime;
  }
};
