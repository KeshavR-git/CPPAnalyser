#include <iostream>
#include <string>
#include <vector>
using namespace std;
int XX_MARKER_XX;


class DownloadingFiles{
public:
	double actualTime(vector<string> tasks){
		double KB=0;
		double KBs=0;
		for(int j=0; j< tasks.size(); j++){
			int space;
			for(int i=0; i<tasks[j].length(); i++){
				if(tasks[j][i]==' '){
					space = i;
				}
			}
			KB+=stoi(tasks[j].substr(0,space))*stoi(tasks[j].substr(space+1,tasks[j].length()-1));
			KBs+=stoi(tasks[j].substr(0,space));
		}
		double res = KB/KBs;
		return res;
	}
};