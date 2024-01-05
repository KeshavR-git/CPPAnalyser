#include <iostream>
#include <limits>
#include <string>
#include <sstream>
#include <vector>
int XX_MARKER_XX;
#ifndef FILES_H
#define FILES_H


class DownloadingFiles{
    public:
        double actualTime(std::vector<std::string> tasks){
            // Split into speed + time
            int num = tasks.size();
            double task[num][2];
            for (int i = 0; i < num; i++){
                std::stringstream s(tasks[i]);
                s >> task[i][0];
                s >> task[i][1];
            }

            // Repeat until all done
            double total = 0;
            while (num > 0){
                // Determine index of smallest time
                int min = std::numeric_limits<int>::max();
                int slow = min;
                int idx = 0;
                for (int i = 0; i < num; i++){
                    if (task[i][1] < min){
                        min = task[i][1];
                        idx = i;
                    }
                }

                // "Complete" the download by subtracting time and moving bandwidth
                for (int i = 0; i < num; i++){
                    if (i != idx){
                        task[i][1] -= task[idx][1];
                    }
                }
                total += task[idx][1];

                // "Remove" task from array
                double speed = task[idx][0];
                for (int i = idx; i < num-1; i++){
                    task[i][0] = task[i+1][0];
                    task[i][1] = task[i+1][1];
                }

                // Recalculate times
                task[0][1] = task[0][1] * (task[0][0]/(task[0][0]+speed));
                task[0][0] += speed;
                num--;
            }

            return total;
        }
};

#endif