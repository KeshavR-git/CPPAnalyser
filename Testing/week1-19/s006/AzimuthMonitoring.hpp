#include <iostream>
#include <string>
#include <sstream>
#include <vector>
using namespace std;
int XX_MARKER_XX;


class AzimuthMonitoring
{
public:
	
	int getAzimuth(std::vector<string> instructions) {

		int sum = 0;
		int size = instructions.size();

	

		for(int i=0; i < size; i++) {

			stringstream store(instructions[i]);

			int values = 0;
			string direction;

			store >> direction >> values;

	
			if(direction == "LEFT" && values == 0) {

					sum -=90;

			}

			if(direction == "RIGHT" && values == 0) {

				sum += 90;
			}


			if(direction == "TURN" && values == 0) {


				sum += 180;
			}

			if(direction == "LEFT" && values > 0) {

		
				sum -= values;

			}

			if(direction == "RIGHT" && values > 0) {

				// cout << values << " v" << endl;

				sum += values;
			}

			if(direction == "HALT") {

				// cout << direction << " d" << endl;

				return sum;
			}


				if(sum < 0) {

				sum += 360;
			
				} else if(sum >= 360) {

				sum -= 360;
			}

		}

		return sum;

	}
	
};