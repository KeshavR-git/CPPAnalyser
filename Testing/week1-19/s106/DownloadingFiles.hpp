#include <iostream>
#include <string>
#include <vector>
using namespace std;
int XX_MARKER_XX;
#ifndef DOWNLOADINGFILES_H
#define DOWNLOADINGFILES_H




class DownloadingFiles
{
public:
	DownloadingFiles(){
	}

	double actualTime(std::vector<string> tasks){
		std::vector<double> downloadAr;
		//just the size of a string;
		std::string::size_type sz;

		for(int firstLoop = 0; firstLoop < tasks.size(); firstLoop++){
			int secondLoop = 0;
			string curNum = ""; 
			while(tasks[firstLoop][secondLoop] != ' '){
				secondLoop++;
			}
			//skip the space;
			secondLoop++;
			while(tasks[firstLoop][secondLoop] != '\0'){
				curNum += tasks[firstLoop][secondLoop];
				secondLoop++;
			}

			//first number
			downloadAr.push_back(stoi(tasks[firstLoop], &sz));
			//second number
			downloadAr.push_back(stoi(curNum, &sz));
		}

			double totalTime = 0;

		while(downloadAr.size() > 0){
			int pos = 0;
			double freeRate = 0;
			double tempMin = 10001;

			//find the minimum download time
				for(int i = 1; i < (downloadAr.size()); i+=2){
					if(downloadAr[i] < tempMin){
						tempMin = downloadAr[i];
						freeRate = downloadAr[i-1];
						pos = i;
					}
				}

				//increment the runnig total
				totalTime+=tempMin;

				//remove the finished items
				downloadAr.erase(downloadAr.begin() + pos);
				downloadAr.erase(downloadAr.begin()+(pos-1));

				//update the times for all downloads
				for(int i = 1; i <= (downloadAr.size()); i=(i+2)){
					if((downloadAr[i]-tempMin) == 0) {
						freeRate += downloadAr[i-1];
						downloadAr.erase(downloadAr.begin()+(i-1));
						downloadAr.erase(downloadAr.begin()+(i-1));
					}
					downloadAr[i] = downloadAr[i]-tempMin;

					//checking for other finished downloads
				}

				//update the first entry with the excess bandwidth 
				if(downloadAr.size() > 0){
					downloadAr[1] = downloadAr[1] * (downloadAr[0] / (downloadAr[0] + freeRate));
					downloadAr[0] = downloadAr[0] + freeRate;
				}
			}


			return totalTime;
			}
};
#endif