using namespace std;
#include <iostream>
#include <string>
#include <vector>
int XX_MARKER_XX;

class DownloadingFiles {
	public:
		int findMin(vector<double> times, vector<double> speeds){
			double min = 0;
			for(int i = 0; i < times.size(); i++){
				if(times.at(i)/speeds.at(i) < min){
					min = i;
				}
			}
			return min;
		}
		double actualTime(vector<string> tasks){
			vector<double> S; // Speeds
			vector<double> T; // Times

			// Split the strings up into vectors
			for(int i = 0; i < tasks.size(); i++){
				int found = tasks[i].find(' ');
				S.push_back(stoi(tasks[i].substr(0, found)));
				T.push_back(stoi(tasks[i].substr(found, tasks[i].length())));
			}
			
			int len = T.size();
			int min = findMin(T, S);
			double minS;
			double minT;
			double res = T.at(min);
			// Iterate and complete the downloads
			for(int i = 0; i < len; i++){
				min = findMin(T, S);
				minS = S.at(min);
				minT = T.at(min);
				T.erase(T.begin()+min);
				S.erase(S.begin()+min);
				len--;

				if(len == 0){
					break;
				} else {
					// Find remaining time
					T.at(i) = T.at(i) - (res);
					// Set new remaining time
					T.at(i) = (T.at(i) * S.at(i)) / (S.at(i) + minS);
					// Set new speed
					S.at(i) = S.at(i) + minS;
					// Add to the result
					res += T.at(i);
				}
				i--;
			}
			return res;
		}
};