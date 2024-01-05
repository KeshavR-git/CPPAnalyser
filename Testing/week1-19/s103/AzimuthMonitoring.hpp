#include <iostream>
#include <string>
#include <vector>
int XX_MARKER_XX;

class AzimuthMonitoring
{
public:
	int change(std::string thing)
{
	std::string test = thing.substr(5, thing.length());
	int num = std::stoi(test);
	return num;
}

	int getAzimuth(std::vector<std::string> instructions)
	{
		int ang = 0;
	int len = instructions.size();
	std::string place;

	int testing = 0;

	for (int i = 0; i < len; i++)
	{
		place = instructions[i];
		
		switch (place[0])
		{
			case 'L' :
				{
				if (place.length() > 4)
				{
					int test = change(place);
					ang = ang - test; 
					}
				else {
					ang = ang - 90;
				}
				break;
				}

			case 'R' :
				{
				if (place.length() > 5)
				{
					int test = change(place);
					ang = ang + test;
				}
				else {
					ang = ang + 90;
				}
				break;
				}
			case 'H' :
				{
				//gotta break the for loop
				testing = 1;
				//return ang;
				break;
				}
			case 'T' :
				{
				ang = ang + 180;
				break;
				}
		}
		
		if (testing == 1)
		{
			break;
		}

	}
	ang = ang % 360;
	if (ang < 0)
	{
		ang = 360 + ang;
	}


	return ang;
	}


};