#include <vector>
int XX_MARKER_XX;

class DownloadingFiles
{
public:
	double actualTime(std::vector<std::string> tasks)
	{
		double kbs = 0;
		double totalKB = 0;
		double temp;

		for(int i=0; i<tasks.size(); i++)
		{
			for (int j=0; j<tasks[i].size(); j++)
			{
				if(tasks[i][j]==' ')
				{
					temp=std::stoi(tasks[i].substr(0,j));
					kbs+=temp;
					totalKB+=temp*(std::stoi(tasks[i].substr(j+1,tasks[i].size())));
					break;
				}
			}
		}

		return totalKB/kbs;
	}
};