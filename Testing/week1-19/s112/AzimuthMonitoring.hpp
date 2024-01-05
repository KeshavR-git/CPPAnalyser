#include <iostream>
#include <string>
#include <vector>
#include <cmath>
using namespace std;
int XX_MARKER_XX;

class AzimuthMonitoring
{
	public:
	int getAzimuth(vector<string> instructions)
	{
		int CurrentAngle = 0;
		int temp;
		int temp2;
		//loop for all inputs, convert inputs into angles
		for (int i = 0; i < instructions.size(); i++)
		{
			//if halt
			if (instructions[i] == "HALT")
			{
				break;
			}
			//if right
			if ((instructions[i])[0] == 'R')
			{
				//if no angle
				if (instructions[i].size() == 5)
				{
					CurrentAngle = CurrentAngle + 90;
				}
				else
				{
					temp = 0;
					for (int j = 1; j < 5-instructions[i].size(); j++)
					{
						temp2 = instructions[i][j+5] - '0';
						temp = temp + temp2*pow(10,j-1);
					}
					CurrentAngle = CurrentAngle + temp;
				}
			}
			//if left
			if ((instructions[i])[0] == 'L')
			{
				//if no angle
				if (instructions[i].size() == 4)
				{
					CurrentAngle = CurrentAngle - 90;
				}
				else
				{
					temp = 0;
					for (int j = 1; j < 4-instructions[i].size(); j++)
					{
						temp2 = instructions[i][j+4] - '0';
						temp = temp + temp2*pow(10,j-1);
					}
					CurrentAngle = CurrentAngle + temp;
				}
			}
			//if turnaround
			if (instructions[i] == "TURN AROUND")
			{
				CurrentAngle = CurrentAngle + 180;
			}
		}
		CurrentAngle = CurrentAngle % 360;
		return CurrentAngle;

	}
};