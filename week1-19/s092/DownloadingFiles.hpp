#include <iostream>
#include <vector>
using namespace std;

class DownloadingFiles{
public:
	int digits(int num)
	{
	    int digits = 0;
	    while (num) {
	        num /= 10;
	        digits++;
	    }
	    return digits;
	}

	double actualTime(vector<string>& time){
		double actualTime;
		vector<int> speed;
		vector<int> timeRemain;
		vector<string> timecopy=time;
		int oldTime;
		int oldSpeed;
		int NewSpeed;

		//removing speed from copy
		for (int i = 0; i < timecopy.size(); i++)
		{
			int num = stoi(timecopy.at(i).c_str());
			timecopy[i].erase(timecopy[i].begin(),timecopy[i].begin()+digits(num)+1);
		}	

		//sort by time shortest to largest
		for (int i = 0; i < time.size()-1; i++)
		{
			for (int j = 0; j < time.size()-i-1; j++)
			{
				int num = stoi(timecopy.at(j).c_str());
				int num1 = stoi(timecopy.at(j+1).c_str());

				if(num>num1){
					vector<string> temp;
					temp.push_back(time[j]);
					time[j]=time[j+1];
					time[j+1]=temp[0];

					vector<string> temp1;
					temp1.push_back(timecopy[j]);
					timecopy[j]=timecopy[j+1];
					timecopy[j+1]=temp1[0];
				}
			}
		}

		//creating speed list
		for (int i = 0; i < time.size(); i++)
		{
			int num = stoi(time.at(i).c_str());
			speed.push_back(num);
			time[i].erase(time[i].begin(),time[i].begin()+digits(num));
		}	

		//creating remaining time list
		for (int i = 0; i < time.size(); i++)
		{
			int num = stoi(time.at(i).c_str());
			timeRemain.push_back(num);
		}	

		//calculation
		int shortestTime = timeRemain[0];
		actualTime = shortestTime;	
		NewSpeed=speed[0];
		for (int i = 0; i < time.size()-1; i++)
		{
			oldSpeed=speed[i+1];
			NewSpeed+=speed[i+1];
			actualTime+=(timeRemain[i+1]-actualTime)*((double)oldSpeed/NewSpeed);
		}

		return actualTime;

	}
};