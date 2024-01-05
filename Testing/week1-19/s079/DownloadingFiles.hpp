#include <iostream>
#include <string>
#include <vector>
using namespace std;
int XX_MARKER_XX;
#ifndef DOWNLOADINGFILES_HPP
#define DOWNLOADINGFILES_HPP




class DownloadingFiles
{
public:
	DownloadingFiles(){
	}

	double actualTime(vector<string> str){

			std::vector<double> downloadAr;
			std::string::size_type sz;


//THE ONLY THING LEFT TO DO IS GET CONSISTEN ARRAY LENGTH
		for(int firstLoop = 0; firstLoop < (str.size()); firstLoop++){
			int secondLoop = 0;
			string curNum = ""; 
			while(str[firstLoop][secondLoop] != ' '){
				secondLoop++;
			}
			secondLoop++;
			while(str[firstLoop][secondLoop] != '\0'){
				curNum += str[firstLoop][secondLoop];
				secondLoop++;
			}


			downloadAr.push_back(stoi(str[firstLoop], &sz));
			downloadAr.push_back(stoi(curNum, &sz));
		}

			double totalTime = 0;
			double freeRate;
			int pos;

		while(downloadAr.size() >	 0){
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
				for(int i = 1; i < (downloadAr.size()); i+=2){
					downloadAr[i] = downloadAr[i]-tempMin;

					//checking for other finished downloads
					if(downloadAr[i] == 0) {
						freeRate += downloadAr[i-1];
						downloadAr.erase(downloadAr.begin() + i);
						downloadAr.erase(downloadAr.begin()+(i-1));
					}
				}

				//update the first entry with the excess bandwidth 
				downloadAr[1] = downloadAr[1] * (downloadAr[0] / (downloadAr[0] + freeRate));
				downloadAr[0] = downloadAr[0] + freeRate;
			}
			return totalTime;
			}
};
#endif