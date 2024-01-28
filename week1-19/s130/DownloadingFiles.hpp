#include <sstream>
#include <vector>
#include <string>
#include <iostream>

class DownloadingFiles
{
public:
    double actualTime(std::vector<std::string> tasks)
    {
        std::vector<double> bw; //bandwidth vector
        std::vector<double> ct; //completion time vector
        double bwTemp;
        double ctTemp;
        double bwTotal = 0;
        double totalTime = 0;
        std::string stringTemp;
        //splits input into 2 vectors
        for (int i = 0; i < tasks.size(); i++)
        {
            std::stringstream ss;
            ss << tasks.at(i);
            ss >> bwTemp;
            ss >> ctTemp;
            bw.push_back(bwTemp);
            ct.push_back(ctTemp);
            bwTotal += bwTemp;
        }
        //Calculates the time taken for each file at max bandwidth, summing the results
        for (int i = 0; i < tasks.size(); i++)
        {
            totalTime += ct.at(i)*bw.at(i)/bwTotal;
        }
        std::cout << totalTime << '\n';
        return totalTime;
    }

};
