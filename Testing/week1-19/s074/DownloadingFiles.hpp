#include <iostream>
#include <stdlib.h> 
#include <string>
#include <sstream>
#include <vector>
using namespace std;
int XX_MARKER_XX;


class DownloadingFiles {
public:
	double actualTime(vector<string> tasks){
		double files=0;
		double totalspd=0;
		
		for(vector<string>::iterator i = tasks.begin();i != tasks.end(); i++){
			stringstream bandwidth(*i);
			int speed;
			int seconds;
			bandwidth>>speed>>seconds;
			cout<<speed<<" "<<seconds<<endl;
			int file=(speed*seconds);
			files +=file;
			totalspd +=speed;
			cout<<files<<" "<<totalspd<<endl;
		}
		double result = files/totalspd;
		return result;

	}
};