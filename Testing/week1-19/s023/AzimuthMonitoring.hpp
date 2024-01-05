#include <stdlib.h>
#include <iostream>
#include <vector>
#include <string>
#include <cstdio>
using namespace std;
int XX_MARKER_XX;

class AzimuthMonitoring
{
	public:
	int getAzimuth(vector<string> instructions)
	{

		int azimuth = 0;

		int index = 0;
		int size = 0;

		while (index < instructions.size()){
			
			size++;

			if(instructions[index] == "HALT"){

				break;
			}

			index++;
		}

		for(int i = 0; i < size; i++){

			string line = instructions[i];

			if(line == "LEFT"){

				azimuth -= 90;
			}
			else if(line == "RIGHT"){

				azimuth += 90;
			}
			else if(line == "TURN AROUND"){

				azimuth += 180;
			}
			else if(line.find("LEFT ") != string::npos){

				int no = stoi(line.substr(5));

				azimuth -= no;

			}
			else if (line.find("RIGHT ") != string::npos)
			{
				int no = stoi(line.substr(6));

				azimuth += no;
			}
			else if (line == "HALT"){

				return azimuth;
			}

			// cout << "azimuth " << azimuth << endl;

			if(azimuth >= 360){

				azimuth = azimuth - 360;
			}

			if(azimuth < 0){

				azimuth = 360 + azimuth;
			}
		}

		return azimuth;
	}
};