#include <iostream>
#include <string>
#include <vector>
int XX_MARKER_XX;

class AzimuthMonitoring{

	public:
		int getAzimuth(std::vector<std::string> instructions){
			int degrees = 0;
			std::string space = " ";
			
			for(unsigned int i=0;i<instructions.size();i++){

				std::string currentInstruction = instructions.at(i);
				std::size_t spacePosition = currentInstruction.find(space);

				// if there is no space, it's either LEFT, RIGHT or HALT
				if(spacePosition==std::string::npos){

					if(currentInstruction.compare("RIGHT") == 0){
						degrees += 90;
					}
					else if(currentInstruction.compare("LEFT") == 0){
						degrees -= 90;
					}
					else{
						break;
					}
				}
				else{

					std::string number = currentInstruction.substr(spacePosition+1);
					currentInstruction = currentInstruction.substr(0,spacePosition);
					
					if(currentInstruction.compare("RIGHT") == 0){
						int newNumber = std::stoi(number);
						degrees += newNumber;
					}
					else if(currentInstruction.compare("LEFT") == 0){
						int newNumber = std::stoi(number);
						degrees -= newNumber;
					}
					else{
						degrees += 180;
					}

				}

				if(degrees>=0){
					degrees = degrees%360;
				}
				else{
					degrees += 360;
				}
			}

			return degrees;
		}
};