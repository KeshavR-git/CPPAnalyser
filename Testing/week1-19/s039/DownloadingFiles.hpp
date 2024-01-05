#include <vector>
#include <sstream>
int XX_MARKER_XX;

class DownloadingFiles {
	int getSpeed(std::string input) {
		//First grab the substring before the space.
		for(int i=0; i<input.size(); i++) {
			if(input[i] == ' ') {
				//Converts output.
				std::string temp = input.substr(0,i);
				std::stringstream stream(temp);
				int output;
				stream >> output;
				return output;
			}
		}
	}
	int getTime(std::string input) {
		//First grab the substring before the space.
		for(int i=0; i<input.size(); i++) {
			if(input[i] == ' ') {
				//Converts output.
				std::string temp = input.substr(i+1,input.size()-i);
				std::stringstream stream(temp);
				int output;
				stream >> output;
				return output;
			}
		}
	}
public:
	double actualTime(std::vector<std::string> tasks) {
		//Find total remaining Size
		double sumSize = 0;
		double bandwidth = 0;
		for(int i=0; i<tasks.size(); i++) {
			sumSize += getTime(tasks[i])*getSpeed(tasks[i]);
			bandwidth += getSpeed(tasks[i]);
		}
		//Find total remaining Size
		return sumSize/bandwidth;
	}
};