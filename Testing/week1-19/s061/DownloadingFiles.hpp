#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <sstream>
using namespace std;
int XX_MARKER_XX;
#ifndef DownloadingFiles_hpp
#define DownloadingFiles_hpp



class DownloadingFiles
{
    public:
        // main method that accepts string and returns a double
        double actualTime(vector<string> tasks)
        {
            //initialise double variables
            double totalData = 0;
            double totalBand = 0;
            double result = 0;

            for(int i = 0; i<tasks.size(); i++)
            {
                // split the string into speed and time variables 
                istringstream iss(tasks[i]);
                double speed = 0;
                double time = 0;

                iss >> speed;
                iss >> time;

                //Total Data = Speed*Time
                totalData = totalData + (speed*time);
                //Bandwidth is total speed
                totalBand = totalBand + speed;
            }
            //(Speed*Time)/Speed = Time
            result = totalData/totalBand;

            return result;
        }
};

#endif