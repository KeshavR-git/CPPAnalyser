#include <iostream>
#include <cmath>
#include <vector>
#include <string>
#include <bits/stdc++.h>
using namespace std;

class DownloadingFiles
{
public:
	DownloadingFiles(){}
	double actualTime(vector <string> task)
	{
	    vector <double> speed;
		vector <double> timeRemaining;
		vector <bool> pending;

		for(unsigned int i=0 ; i<task.size() ; i++)
		{
			int j = 0;
			string number;
			stringstream ss(task[i]);
			while(getline(ss, number, ' ')&&j<2)
			{ 
				if(j==0) {speed.push_back(stod(number)); pending.push_back(true);}
				if(j==1) timeRemaining.push_back(stod(number));
				j++;
			}
		}

		int minIndex;
		int remainingDownloads = task.size();
	    double totalTime = 0;
	    int j = 0;
	    
		while(remainingDownloads>0)
		{
		    if(timeRemaining.at(j)!=0)
		    {
		        double distribute = 0;
		    	minIndex = j;
		    	for (unsigned int i=0 ; i<task.size() ; ++i) if(timeRemaining.at(i)<timeRemaining.at(minIndex)&&timeRemaining.at(i)!=0) minIndex=i;
		    	double min = timeRemaining[minIndex];
		    	//cout<<"the min is timeRemaining["<<minIndex<<"] = "<<timeRemaining[minIndex]<<endl;
		    	pending[minIndex] = false;
		    	distribute += speed[minIndex];
		    	totalTime += min;
		    	remainingDownloads--;

		    	for (unsigned int i=0 ; i<task.size() ; ++i)
		    	{
		    		if(timeRemaining.at(i)!=0) timeRemaining[i] -= min;
		    		//when downloads have same remaining time
		    		if(timeRemaining.at(i)==0&&pending.at(i)==true)
		    		{
		    			distribute += speed[i];
		    			remainingDownloads--;
		    			pending[i] = false;
		    			//cout<<"same time remaining"<<endl;
		    		}
		    	}

		    	for (unsigned int i = 0 ; i <task.size() ; ++i)
		    	{
		    		if(timeRemaining.at(i)!=0)
		    		{
		    			double oldSpeed = speed[i];
		    			//new speed
		    			//cout<<"we will be distributing"<<distribute/remainingDownloads<<"to each file"<<endl;
		    			speed[i] += distribute/remainingDownloads;
		    			//new remaining time
		    			timeRemaining[i] *= oldSpeed/speed[i];
		    		}
		    	}
		    	j=0;
		    }
		    else j++;
		}

	    return totalTime;
	}
	
};

/*int main()
{
    vector <string> re = {"100 10000", "100 10000", "100 10000", "100 10000", "100 10000", "100 10000", "100 10000", "100 10000", "100 10000", "100 10000", "100 10000", "100 10000", "100 10000", "100 10000", "100 10000", "100 10000", "100 10000", "100 10000", "100 10000", "100 10000", "100 10000", "100 10000", "100 10000", "100 10000", "100 10000", "100 10000", "100 10000", "100 10000", "100 10000", "100 10000", "100 10000", "100 10000", "100 10000", "100 10000", "100 10000", "100 10000", "100 10000", "100 10000", "100 10000", "100 10000", "100 10000", "100 10000", "100 10000", "100 10000", "100 10000", "100 10000", "100 10000", "100 10000", "100 10000", "100 10000"}
    DownloadingFiles files = DownloadingFiles();
    cout<<setprecision(16)<<files.actualTime(re)<<endl;
}*/