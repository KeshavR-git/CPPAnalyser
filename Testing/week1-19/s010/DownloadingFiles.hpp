#include <string>
#include <vector>
using namespace std;
int XX_MARKER_XX;


class DownloadingFiles {
public:
	double actualTime(vector<string> tasks) {
		// variables
			int no_tasks = tasks.size();
			double bandwidth = 0;				// total bandwidth avaliable
			double totalsize = 0;				// total size of all downloads

		// 2d array of downloads * download_info {speed, time, size}
			int **task_info = new int*[no_tasks];
			for(int i = 0; i < no_tasks; i++) {
				// this element points to an array
				task_info[i] = new int[3];
				
				// set up temp variables for populating row
				int column = 0;
				string temp = "";
				
				// populate this element's array
				for(unsigned int j = 0; j < tasks[i].length(); j++) {
					// if the j'th char of the i'th string is a digit, add it to temp
					if( isdigit(tasks[i][j]) ) {
						temp = temp + tasks[i][j];
					}
					
					// if space or last character... save temp (as int) into appropriate column
					if( (tasks[i][j] == ' ') || ( j == (tasks[i].length() - 1) ) ) {
						// save variables
						task_info[i][column] = stoi(temp);
						
						// if done reading, calculate size of this download, & update total download size and bandwidth
						if(column == 1) {
							task_info[i][2] = task_info[i][0] * task_info[i][1];
							totalsize = totalsize + task_info[i][2];
							bandwidth = bandwidth + task_info[i][0];
						}
						
						// otherwise, prepare for next cycle
						else {
							column++;
							temp = "";
						}
					}
				}
			}
	
		// clean heap
			for(int i = 0; i < no_tasks; i++) {
				delete[] task_info[i];
			}
			delete[] task_info;
		
		// calculate return
			double longest_time = totalsize/bandwidth;
			return longest_time;
	}
};
