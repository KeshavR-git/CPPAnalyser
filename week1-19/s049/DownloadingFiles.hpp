#include <string>
#include <vector>
#ifndef DownloadingFiles_hpp
#define DownloadingFiles_hpp
class DownloadingFiles{
	public:
		double actualTime(std::vector<std::string> tasks){
			int n=tasks.size();
			int speed;
			int time;
			int kbs;
			double totalSpeed = 0;
			double totalKbs = 0;
			double totalTime;
			for (int i = 0; i < n; ++i)
			{
				speed = 0;
				time = 0;
				kbs = 0;
				int j=0;

				while(tasks.at(i)[j]!=' '){
					j++;
				}

				speed = std::stoi(tasks.at(i).substr(0,j));
				time = std::stoi(tasks.at(i).substr(j));
				kbs = speed*time;
				totalSpeed=0.0+totalSpeed+speed;
				totalKbs=0.0+totalKbs+kbs;
			}
			totalTime = totalKbs/totalSpeed;
			return totalTime;
		}
};
#endif