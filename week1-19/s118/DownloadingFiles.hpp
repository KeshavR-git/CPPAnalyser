#include <iostream>
#include <sstream>
#include <vector>
using namespace std;

class DownloadingFiles{
public:
	double actualTime(vector<string> tasks){
		int size = tasks.size();
		int i = 0;
		double Times[size];
		double Speeds[size];
		double totalTime = 0;
		double speed, time;
		//cout << size << endl;

		//This for loop stores the strings of speed and
		//times into seperate double arrays.
		for (i = 0; i < size; i++){
			istringstream iss(tasks[i]); 

			iss >> speed >> time;
			Speeds[i] = speed;
			Times[i] = time;

		}
		//the following sorts both arrays in terms of ascending times
		double min;
		int minIndex;
		double temp;
		int j;

		for (i = 0; i < size-1; i ++){
			min = Times[i];
			minIndex = i;
			for (j = i; j < size; j++){
				if (Times[j] < min){
					min = Times[j];
					minIndex = j;
				}
			}
			if (!(minIndex == i)){
				temp = Times[i];
				Times[i] = Times[minIndex];
				Times[minIndex] = temp;
				temp = Speeds[minIndex];
				Speeds[minIndex] = Speeds[i];
				Speeds[i] = temp;
			}
		}

		double oldSpeed = Speeds[0];
		totalTime = Times[0];
		//cout << "initial total time: " << totalTime << endl;
		//cout << Times[0] << endl;
		for (i = 1; i < size; i++){
			//cout << "new speed = " << oldSpeed << " + " << Speeds[i] << endl;
			double newSpeed = oldSpeed + Speeds[i];
			oldSpeed = Speeds[i];
			//cout << "new remaining time = (" << Times[i] << " - " << totalTime << ") x " << oldSpeed << " / " << newSpeed << endl;
			double newRemainingTime = (Times[i] - totalTime)*oldSpeed/newSpeed;
			Speeds[i] = Speeds[i] + Speeds[i-1];
			//cout << "total time = " << totalTime << " + " << newRemainingTime << endl;
			totalTime = totalTime + newRemainingTime;
			oldSpeed = newSpeed;
		}

		return totalTime;
	}
};