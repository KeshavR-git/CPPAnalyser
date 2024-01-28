#include <vector>
#include <string>
#include <string.h>
#include <math.h>
using namespace std;


class AzimuthMonitoring
{
public:
	int getAzimuth(vector<string> instructions)
	{
		//currently 0 degrees from north
		int angle = 0;
		int i = 0;

		while(i != instructions.size()){

			if (instructions[i][0]== 'L')
			{
				if (instructions[i][4] != '\0')
				{
					int x= 0;
					vector <int> leftnum;
					for (int j = 5; j < instructions[i].size(); ++j)
					{			
						int x = instructions[i][j] - 48;
						leftnum.push_back(instructions[i][j]-48);					
					}

					int anglesum=0;

					for (int i = 0; i < leftnum.size(); ++i)
					{
						int exponent = leftnum.size()-1-i;
						int result = pow(10,exponent);
						anglesum+=leftnum[i]*result;
					}
						
					angle = (((angle-anglesum)%360)+360) % 360 ;
				}
				else
				{
					angle = (((angle-90)%360)+360) % 360 ;	
				}


			}
			else if (instructions[i][0] == 'R')
			{
				if (instructions[i][5] != '\0')
				{
					int y= 0;
					vector <int> rightnum;
					
					for (int j = 6; j < instructions[i].size(); ++j)
					{			
						int y = instructions[i][j] - 48;
						rightnum.push_back(instructions[i][j]-48);					
					}

					int anglesum=0;

					for (int i = 0; i < rightnum.size(); ++i)
						{
							int exponent = rightnum.size()-1-i;
							int result = pow(10,exponent);
							anglesum+=rightnum[i]*result;
						}
						
					angle = (((angle+anglesum)%360)+360) % 360 ;
				}
				else
				{
					angle = (((angle+90)%360)+360) % 360 ;	
				}
			}
			else if (instructions[i] == "TURN AROUND")
			{
				angle = (((angle-180)%360)+360) % 360 ;
			}
			else if (instructions[i] == "HALT")
			{
				break;
			}
			else
			{
				angle = (((angle-90)%360)+360) % 360 ;	
			}

			i++;
		}
		return angle;
	}
};
