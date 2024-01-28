#include <string>
#include <vector>

class DownloadingFiles {
public:
	double actualTime(std::vector<std::string>);
};

double DownloadingFiles::actualTime(std::vector<std::string> in){
	int totalSize = 0;
	int totalSpeed = 0;
	for(int i=0;i<in.size();i++){
		int pos = 0;
		int speed = 0;
		while(in[i][pos]!=' ' && pos<in[i].length()){
			speed = (speed*10)+in[i][pos]-48;
			pos++;
		}
		pos++;
		int time = 0;
		while(pos<in[i].length()){
			time = (time*10)+in[i][pos]-48;
			pos++;
		}
		totalSize += speed*time;
		totalSpeed += speed;
	}
	return (double)totalSize/totalSpeed;
}
