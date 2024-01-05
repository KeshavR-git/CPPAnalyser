#include <iostream>
#include <vector>
#include <string.h>
int XX_MARKER_XX;

class AzimuthMonitoring
{
	public:
		// default constructor
		AzimuthMonitoring() {}

		// returns the angle of the robot after executing the input series of instructions
		int getAzimuth(std::vector<std::string> instructions) {

			char ch ;
			int temp_int ;
			std::string temp_str ;
			
			// current angle of the robot -- initially faces north
			int angle = 0 ;

			// exectute instructions
			for (int i = 0 ; i < instructions.size() ; i++) {
				ch = instructions[i].front() ;
				switch (ch) {
					case 'L':
						if (instructions[i] == "LEFT") {
							angle += -90 ;
						} else {
							temp_str = instructions[i].substr(5) ;
							temp_int = std::stoi(temp_str) ;
							angle += -temp_int ;
						}
						break ;
					case 'R':
						if (instructions[i] == "RIGHT") {
							angle += 90 ;
						} else {
							temp_str = instructions[i].substr(6) ;
							temp_int = std::stoi(temp_str) ;
							angle += temp_int ;
						}
						break ;
					case 'T':
						angle += 180 ;
						break ;
					case 'H':
					default:
						// terminate for loop
						i = 50 ; 
						break ;
				}
			}

			// angle must always be between 0 and 359
			while (angle < 0) { angle += 360 ; }
			angle = angle%360 ;

			return angle ;
		}
};