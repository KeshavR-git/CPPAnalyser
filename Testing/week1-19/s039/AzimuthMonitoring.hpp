#include <iostream>
#include <string>
#include <vector>
#include <sstream>
int XX_MARKER_XX;

//Class for Azimuth adding and subtracting
class Azimuth {
	int azimuth;
	void add(int input) {
		
		azimuth += input;
		//Checks if azimuth number is negative or greater than 360
		if(azimuth < 0) {
			azimuth = 360 + azimuth;
		} else if(azimuth >= 360) {
			azimuth = azimuth - 360;
		}
	}
public:
	Azimuth() {
		azimuth = 0;
	}
	void turn(std::string input) {
		//Logic for left turns
		if(input[0] == 'R') {
			//Logic for simple turns
			if(input.size() == 5) {
				add(90);
			} else {
				//Converts X into a number.
				std::istringstream stream(input.substr(6,3));
				int num;
				stream >> num;
				if(stream.fail()) {
					perror("stream failed");
				}
				//Adds the number
				add(num);
			}
		} else if(input[0] == 'L') {
			//Logic for simple turns
			if(input.size() == 4) {				
				add(-90);
			} else {
				//Converts X into a number.
				std::istringstream stream(input.substr(5,3));
				int num;
				stream >> num;
				if(stream.fail()) 
					perror("stream failed");
				//Subtracts number
				add(-num);
			}
		} else {
			//The only other possibility is if it's a turn-around.
			add(180);
		}
	}
	int get() {
		return azimuth;
	}
};

//Class for string reading logic.
class AzimuthMonitoring {
public:
	int getAzimuth(std::vector<std::basic_string<char> > instructions) {
		Azimuth azi;

		for(int i=0; i<instructions.size(); i++) {
			if(instructions[i][0] == 'H') {
				break;
			} else {
				azi.turn(instructions[i]);
			}
		}

		return azi.get();
	}
};