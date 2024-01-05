using namespace std;
#include <string>
#include <vector>
#include <limits.h>
int XX_MARKER_XX;

class DownloadingFiles {
public:
	double actualTime(vector<string> tasks);
	double actualTime(string tasks);
private:
	void splitString(string s, vector<string>& v, string c);
	int getMinRemain(double* remains, int len);
	int getMinSpeed(double* speeds, int len);
	void calcSpeedAndReamin(double* speeds, double* remains, int len, double nowSpeed, double nowRemain);
	bool getIsFinish(double* remains, int len);
};

double DownloadingFiles::actualTime(string tasks) {
	vector<string> results;
	splitString(tasks, results, " ");
	int taskSize = results.size() / 2;
	double time = 0.0;
	double* speeds = new double[taskSize] { 0.0 };
	double* remains = new double[taskSize] { 0.0 };

	int idx = 0;
	for (int i = 0; i < results.size(); i += 2) {
		speeds[idx] = atof(results[i].c_str());
		remains[idx] = atof(results[i + 1].c_str());
		idx++;
	}

	bool isFinish = false;
	while (!isFinish) {
		int littleIdx = getMinRemain(remains, taskSize);
		double nowSpeed = speeds[littleIdx];
		double nowRemain = remains[littleIdx];
		time += nowRemain;
		remains[littleIdx] = -1;
		speeds[littleIdx] = -1;
		isFinish = getIsFinish(remains, taskSize);
		if (!isFinish) {
			calcSpeedAndReamin(speeds, remains, taskSize, nowSpeed, nowRemain);
		}
	}
	return time;
}

double DownloadingFiles::actualTime(vector<string> tasks) {
	int taskSize = tasks.size();
	double time = 0.0;
	double* speeds = new double[taskSize] { 0.0 };
	double* remains = new double[taskSize] { 0.0 };

	for (int i = 0; i < taskSize; ++i) {
		vector<string> results;
		splitString(tasks[i], results, " ");
		speeds[i] = atof(results[0].c_str());
		remains[i] = atof(results[1].c_str());
	}
	bool isFinish = false;
	while (!isFinish) {
		int littleIdx = getMinRemain(remains, taskSize);
		double nowSpeed = speeds[littleIdx];
		double nowRemain = remains[littleIdx];
		time += nowRemain;
		remains[littleIdx] = -1;
		speeds[littleIdx] = -1;
		isFinish = getIsFinish(remains, taskSize);
		if (!isFinish) {
			calcSpeedAndReamin(speeds, remains, taskSize, nowSpeed, nowRemain);
		}
	}
	return time;
}

bool DownloadingFiles::getIsFinish(double* remains, int len) {
	bool isFinish = true;
	for (int i = 0; i < len; ++i) {
		if (remains[i] != -1) {
			isFinish = false;
			break;
		}
	}
	return isFinish;
}

void DownloadingFiles::calcSpeedAndReamin(double* speeds, double* remains, int len, double nowSpeed, double nowRemain) {
	for (int i = 0; i < len; ++i) {
		if (remains[i] != -1) {
			remains[i] -= nowRemain;
		}
	}
	int littleIdx = getMinSpeed(speeds, len);
	double oldSpeed = speeds[littleIdx];
	speeds[littleIdx] += nowSpeed;
	remains[littleIdx] = (remains[littleIdx] * oldSpeed) / speeds[littleIdx];
}

int DownloadingFiles::getMinRemain(double* remains, int len) {
	int little = INT_MAX;
	int littleIdx = -1;
	for (int i = 0; i < len; ++i) {
		if (remains[i] != -1 && remains[i] < little) {
			littleIdx = i;
			little = remains[i];
		}
	}
	return littleIdx;
}

int DownloadingFiles::getMinSpeed(double* speeds, int len) {
	int little = INT_MAX;
	int littleIdx = -1;
	for (int i = 0; i < len; ++i) {
		if (speeds[i] != -1 && speeds[i] < little) {
			littleIdx = i;
			little = speeds[i];
		}
	}
	return littleIdx;
}

//Split the string
void DownloadingFiles::splitString(string s, vector<string>& v, string c) {
	int pos1, pos2;
	pos2 = s.find(c);
	pos1 = 0;
	while (string::npos != pos2) {
		v.push_back(s.substr(pos1, pos2 - pos1));
		pos1 = pos2 + c.size();
		pos2 = s.find(c, pos1);
	}
	if (pos1 != s.length()) {
		v.push_back(s.substr(pos1));
	}
}
