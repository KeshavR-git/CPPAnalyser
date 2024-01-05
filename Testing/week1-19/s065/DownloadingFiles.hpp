#include <string>
#include <vector>
using namespace std;
int XX_MARKER_XX;

class DownloadingFiles
{
public:
	double actualTime(vector<string> tasks)
	{
		int length = tasks.size();
		double bandwidth = 0;
		double file_size = 0;
		for (int i = 0; i < length; i++)
		{
			int space = 0;
			while(tasks[i][space] != ' ')
			{
				space++;
			}
			int speed = stoi(tasks[i].substr(0, space));
			int time = stoi(tasks[i].substr(space + 1));
			bandwidth += speed;
			file_size += speed * time;
		}
		return file_size / bandwidth;
	};
};