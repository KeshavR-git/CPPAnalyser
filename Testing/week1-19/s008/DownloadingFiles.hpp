#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
using namespace std;
int XX_MARKER_XX;


class DownloadingFiles
{
    public:

    double actualTime(vector<string> tasks)
    {
        int totalDownloadSize = 0;
        int totalBandwidth = 0;

        for (auto task : tasks)
        {
            vector<int> converted = splitTask(task);

            /**
             * Calculate the total download size for the task, then add it
             * onto the total for all tasks
             * 
             * E.g. speed (KB/s) * time (s) = size (KB)
             */
            int fileSize = converted.at(0) * converted.at(1);
            totalDownloadSize += fileSize;

            /**
             * Add on to the total bandwidth
             */
            totalBandwidth += converted.at(0);
        }

        /**
         * Return the total download time
         */
        return totalDownloadSize / (double) totalBandwidth;
    }

    private:

    /**
     * Converts the task from a string to two integers
     */
    vector<int> splitTask(string task)
    {
        istringstream ss(task);

        vector<int> convertedTask;
        int i = 0;

        do {

            /**
             * Get the string from the SS
             */
            string value = "";
            ss >> value;

            /**
             * Convert it to an integer then add it to the vector
             */
            convertedTask.push_back(stoi(value));

            i++;

        } while (i < 2);

        return convertedTask;
    }

};