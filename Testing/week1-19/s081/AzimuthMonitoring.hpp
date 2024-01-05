#include <vector>
#include <string>
#include <sstream>
using namespace std;
int XX_MARKER_XX;

class AzimuthMonitoring
{
	private:
	vector<string> split(string str) {
		vector<string> arr(2);
		string split;
		istringstream spl(str);
		int i = 0;
		while (getline(spl, split, ' ')) {
			arr[i] = split;
			i++;
		}
		return arr;
	}

	public:
	int getAzimuth(vector<string> instructions) {
		int degrees = 0;
		for (int i = 0; i < instructions.size(); i++) {
			if (instructions[i] == "HALT")
				break;
			else if (instructions[i] == "RIGHT")
				degrees += 90;
			else if (instructions[i] == "LEFT")
				degrees -= 90;
			else if (instructions[i] == "TURN AROUND")
				degrees += 180;
			else {
				vector<string> arr(split(instructions[i]));
				if (arr[0] == "RIGHT")
					degrees += stoi(arr[1]);
				else
					degrees -= stoi(arr[1]);
			}
			if (degrees < 0)
				degrees += 360;
			else if (degrees >= 360)
				degrees -= 360;
		}
		return degrees;
	}
};