#include <iostream>
#include <vector>
#include <string>
using namespace std;

class DownloadingFiles{
public:
	double actualTime(vector<string> tasks)
	{
		for(int i=0;i<tasks.size();i++){
			int space=tasks[i].find(" ");
			int speed=stoi(tasks[i].substr(0,space));
			int time=stoi(tasks[i].substr(space));
			double totalspeed+=speed;
			double totalsize+=(speed*time);
		}
		return totalsize/totalspeed;
	}
};
// int main()
// {
// 	DownloadingFiles a;
// 	vector<string> b;
// 	b.push_back("30 57");
// 	b.push_back("2 22");
// 	cout<<a.actualTime(b)<<endl;
// }