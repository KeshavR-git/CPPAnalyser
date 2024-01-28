#include <iostream>
#include <vector>
#include <string>
#include <sstream>
using namespace std;


class AzimuthMonitoring{

	public:
		
		int getAzimuth(vector<string> instructions){

			int finalAzimuth = 0;

			string direction;

			int angle;

			for(int i = 0; i < instructions.size(); i++){
				
				if(instructions[i] == "RIGHT"){

					finalAzimuth = finalAzimuth + 90;

				}else if(instructions[i] == "LEFT"){

					finalAzimuth = finalAzimuth - 90;

				}else if(instructions[i] == "TURN AROUND"){

					finalAzimuth = finalAzimuth + 180;

				}else if(instructions[i] == "HALT"){

					break;

				}else{

					stringstream ss(instructions[i]);

					ss >> direction >> angle;

					if(direction == "RIGHT"){
					 	
					 	finalAzimuth = finalAzimuth + angle;

					}else if(direction == "LEFT"){
					 	
					 	finalAzimuth = finalAzimuth - angle;

					}

				}

			}

			if(finalAzimuth < 0 && finalAzimuth >= -360){

				return 360+finalAzimuth;

			}else if(finalAzimuth < -360 && finalAzimuth%(-360) != 0){

				return 360-(-(360+finalAzimuth))%360;

			}else if(finalAzimuth < -360 && finalAzimuth%(-360) == 0){

				return 0;

			}else{

				return finalAzimuth%360;

			}

		}

/*int main(){
	vector<string> rotation;
	rotation.push_back("RIGHT 59");
	rotation.push_back("RIGHT");
	rotation.push_back("RIGHT");
	rotation.push_back("HALT");
	rotation.push_back("LEFT");
	rotation.push_back("LEFT");
	rotation.push_back("LEFT");
	//rotation.push_back("RIGHT");
	cout<<getAzimuth(rotation)<<endl;

	return 0;

}*/

		


};