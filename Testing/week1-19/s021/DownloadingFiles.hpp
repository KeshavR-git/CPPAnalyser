#include <string>
#include <vector>
#include <iostream>
int XX_MARKER_XX;

class DownloadingFiles
{
public:
    double actualTime(std::vector<std::string> tasks)
    {
        int n = tasks.size();

        double totalBandwidth = 0.0;
        double totalSize = 0.0;
        for (int i=0; i<n; i++)
        {
            int speed, timeRemaining;
            sscanf(tasks[i].c_str(), "%d %d", &speed, &timeRemaining);
            totalBandwidth += double(speed);
            totalSize += double(speed * timeRemaining);
        }
        return totalSize / totalBandwidth;

    }
};