#include <string> 
#include <vector>
#include <sstream>
using namespace std;
int XX_MARKER_XX;

class DownloadingFiles{
	public:
	double actualTime(vector<string> tasks){

		string files[tasks.size()];
		for(int i=0; i<tasks.size(); i++)
			files[i] = tasks[i];

		int filesSize = sizeof(files)/sizeof(files[0]);

		int totalSpeed = 0, totalSize = 0;
		double time;
		string res[filesSize][2];

		for(int i=0; i<filesSize; i++){
			stringstream stream(files[i]);
			int j = 0;
			while(1){
				int n;
				stream >> res[i][j];
				if(!stream)
					break;
				j++;
			}
		}

		for(int i=0; i<filesSize; i++){
			totalSpeed += stoi(res[i][0]);
			totalSize += stoi(res[i][0])*stoi(res[i][1]);
		}

		time = 1.0* totalSize/totalSpeed;

		return time;
	}
};