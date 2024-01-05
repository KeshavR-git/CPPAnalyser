#include <iostream>
#include <string>
#include <vector>
using namespace std;
int XX_MARKER_XX;

class DownloadingFiles
{
public:
    double actualTime(vector<string> tasks);
};

double DownloadingFiles::actualTime(vector<string> tasks)
{
    double totalData = 0;
    double bandwidth = 0;

    for (int i = 0; i < tasks.size(); i++)
    {
        //extract partialBandwidth and secondsRemaining from each input string
        int partialBandwidth = stoi(tasks[i].substr(0,' '));
        int secondsRemaining = stoi(tasks[i].substr(tasks[i].find_first_of(' '), tasks[i].length()));
        //collect relative portions of data and bandwidth add to totals
        totalData += partialBandwidth * secondsRemaining;
        bandwidth += partialBandwidth;
    }

    return totalData / bandwidth;
}
