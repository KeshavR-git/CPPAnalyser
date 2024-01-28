#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
#include <sstream>
using namespace std;


class AzimuthMonitoring
{
public:
	int getAzimuth(vector<string> instructions)
	{
		//get length
		int length=instructions.size();
		//create variable to store degree
		int degree=0;
		for(int i=0;i<length;i++)
		{
			if(instructions[i]=="LEFT")
			{
				degree=degree-90;
				if(degree==0)
				{
					degree=degree+360;
				}
			}
			else if(instructions[i]=="RIGHT")
			{
					degree=degree+90;
					if(degree>=360)
					{
						degree=degree-360;
					}
				
			}
			else if(instructions[i]=="HALT")
			{
				break;
			}
		}

		return degree;


	}
};