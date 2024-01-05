#include <vector>
#include <string>
#include <sstream>
#include <iostream>
int XX_MARKER_XX;

class DownloadingFiles
{
public:
	double actualTime(std::vector <std::string> tasks){
		std::stringstream s;
		double totalSize, bandwidth = 0;
		double currentSize, currentSpeed, result;
		for (int i=0; i<tasks.size(); i++){
			s << tasks[i];
			s >> currentSpeed >> currentSize;
			totalSize+=currentSpeed*currentSize;
			bandwidth+=currentSpeed;
			s.clear();
		}
		result = totalSize/bandwidth;
		return result;
	}
};