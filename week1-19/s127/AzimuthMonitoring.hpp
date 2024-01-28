#include <sstream>
#include <vector>
using namespace std;


class AzimuthMonitoring
{
public:
	int getAzimuth(vector<string> instructions)
	{
		stringstream cmd;
		int counter = 0;
		string dir = " ";
		string garbage = " ";
		int deg = -1;
		int azi = 0;
		string current = " ";

		while( counter < instructions.size() )
		{
			deg = -1; //Purposely invalid
			dir = " ";
			current = instructions[counter];
			cmd << current;
			cmd >> dir >> deg;
			// cout << "Current is " << current << endl;
			if (current == "HALT")
			{
				return azi;
			}
			if (dir == "LEFT")
			{
				if (deg != -1)
				{
					azi -= deg;
				}
				else
				{
					azi -= 90;
				}
			}
			else if (dir == "RIGHT")
			{
				if (deg != -1)
				{
					azi += deg;
				}
				else
				{
					azi += 90;
				}
			}
			else if(dir == "TURN")
			{
				azi += 180;
			}

			if (azi < 0)
			{
				azi += 360;
			}
			else if (azi >= 360)
			{
				azi -=360;
			}
			cmd.str("");
			cmd.clear();
			counter++;
		}
		return azi;
	}
	
};