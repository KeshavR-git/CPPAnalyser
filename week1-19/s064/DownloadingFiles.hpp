#include <bits/stdc++.h>
using namespace std;



class DownloadingFiles
{

public:

	
	double actualTime(vector<string> tasks) {
		double dota = 0;
	double dota_1 = 0;
		vector<string> dx(50);
		vector<string> dy(50);
		int b = tasks.size();
		for (int i = 0; i < b; i++) {
			int j = 0;
			while (tasks[i][j] != ' ') {
				j++;
			}
			dx[i] = tasks[i].substr(0, j);
			dy[i] = tasks[i].substr(j + 1);
		}

		for (int i = 0; i < b; i++) {
			dota = dota + stoi(dx[i])*stoi(dy[i]);
			dota_1 = dota_1 + stoi(dx[i]);
		}

		// double num = double(temp) / double(temp_1);

		return double(dota) / double(dota_1);
	}
};

