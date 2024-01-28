#include <iostream>
#include <vector>
using namespace std;

class AzimuthMonitoring
{
public:
	int getAzimuth(vector<string> instructions)
	{
		int degrees=0;
		int rest=0;
		string direction;
		for(int i=0; i<instructions.size();i++)
		{
			int space=instructions[i].find(" ");
			if (space==-1)
			{
				direction=instructions[i].substr(0,space);
				//cal degress
				if(direction=="LEFT"){
				rest+=270;
				}else if (direction=="RIGHT")
				{
					rest+=90;
				}else{
					break;
				}

			}else{
				direction=instructions[i].substr(0,space);
				if (direction=="TURN")
				{
					rest+=180;
				}else{
					degrees=stoi(instructions[i].substr(space));
					if(direction=="LEFT"){
						rest=rest+(360-degrees);
					}else if (direction=="RIGHT")
					{
						rest=rest+degrees;
					}
				
			}

		}
		}
		rest=rest%360;
		return rest;
	}
	
	
};

// int main()
// {
// 	AzimuthMonitoring a;
// 	std::vector<string> v;
// 	//v.push_back("TURN AROUND");
// 	//v.push_back("RIGHT 59");
// 	v.push_back("LEFT");
// 	v.push_back("LEFT");
// 	v.push_back("LEFT");
// 	v.push_back("LEFT");
// 	v.push_back("LEFT");
// 	v.push_back("HALT");
// 	cout<<a.getAzimuth(v)<<endl;
// }