#include <iostream>
#include <string>
#include <vector>
#include <sstream>
using namespace std;
int XX_MARKER_XX;


class DownloadingFiles {
    public:
        double actualTime( vector<string> tasks) {
            double speed;
            double time;
            double size = 0;
            double totalSpeed = 0;
            string line;

            for (int i = 0; i < tasks.size(); i ++) {
                line = tasks[i];
                stringstream ss(line);
                ss >> speed >> time;
                size = size + (speed*time);
                totalSpeed = totalSpeed + speed;
            }

            size = size/ totalSpeed;
            return size;
        }
};