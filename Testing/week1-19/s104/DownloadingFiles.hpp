#include <iostream>
#include <string>
#include <vector>
#include <limits>
using namespace std;
int XX_MARKER_XX;


class DownloadingFiles
{
  public:
    double actualTime(vector<string> tasks)
    {
      vector<double> speed;
      vector<double> timeLeft;
      vector<bool> isDone;
      // initialisation
      for ( unsigned int i=0; i<tasks.size(); i++ ){
        isDone.push_back(false);
        size_t space = tasks[i].find(' ');
        speed.push_back( stod( tasks[i].substr(0,space) ) );
        timeLeft.push_back( stod(tasks[i].substr(space,string::npos) ) );
        // // DEBUG
        // cout << speed[i] << endl;
        // cout << timeLeft[i] << endl;
      }

      double totalTime = 0;
      for ( unsigned int j=0; j<tasks.size(); j++ )
      {
        // finds the file with the minimum download time
        double bandwidthTransfer = 0;
        double minTime = numeric_limits<double>::max();
        int minIndex;
        for ( unsigned int i=0; i<tasks.size(); i++ ){
          if ( timeLeft[i] < minTime && isDone[i] == false ){
            minIndex = i;
          }
        }
        minTime = timeLeft[minIndex];
        totalTime += minTime;                 // add it to total time taken
        isDone[minIndex] = true;                // record the download that finished
        bandwidthTransfer += speed[minIndex];

        // cout << "minIndex: " << minIndex << endl;                   // DEBUG
        // cout << "minTime: " << minTime << endl;                     // DEBUG
        // cout << "total time so far: " << totalTime << endl;          // DEBUG

        for ( unsigned int i=0; i<tasks.size(); i++ ){
          // recalculate the remaining time for each of the downloading files after the min file finished downloading
          timeLeft[i] -= minTime;
          // when multiple downloads have same time left
          if ( isDone[i] == false && timeLeft[i] == 0 ){
            isDone[i] = true;
            bandwidthTransfer += speed[i];
          }
        }
        // recalculate the remaining time for the file that gain the bandwidth of the finished file which will
        // be the first file in the vector that is still downloading
        for ( unsigned int i=0; i<tasks.size(); i++ ){
          if ( isDone[i] == false ){
            timeLeft[i] *= speed[i]/(speed[i]+bandwidthTransfer);
            speed[i] += speed[minIndex];        // store the new (and increased) bandwidth
            break;
          }
        }
      }
      return totalTime;
    }
};
