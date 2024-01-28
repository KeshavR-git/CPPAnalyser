#include <iostream>
#include <vector>
using namespace std;


class AzimuthMonitoring
{
	public:
		int getAzimuth(vector<string> instructions){

			int direction = 0;
			bool haltflag = false;

			// Run for every instruction in input
			for (int i = 0; i < instructions.size(); i++) {

				string first = "";
				string second = "";
				int j = 0;

				// Wrap the whole thing in an if statement so it's not executed if HALT has been
				// triggered
				if (!haltflag) {

					// Put the first word into a variable
					while (j < instructions.at(i).length() && instructions.at(i).at(j) != ' ') {
						first += instructions.at(i).at(j);
						j++;
					}

					// Put the second word into a variable
					while (j < instructions.at(i).length()) {
						second += instructions.at(i).at(j);
						j++;
					}

					// If the command is 2 words
					if (second != "") {

						// Command is turn around, add 180 to direction
						if (first == "TURN") {
							direction = (direction + 180) % 360;

						// Command is LEFT XX, subtract number from direction
						} else if (first == "LEFT") {
							direction = direction - stoi(second);
							if (direction < 0)
								direction += 360;

						// Command is RIGHT XX, add number to direction
						} else {
							direction = (direction + stoi(second)) % 360;
						}

					// If the command is only 1 word
					} else {

						// Command is HALT, trigger the HALT flag so no more
						// instructions are followed
						if (first == "HALT") {
							haltflag = true;

						// Command is LEFT, subtract 90 from direction
						} else if (first == "LEFT") {
							direction = direction - 90;
							if (direction < 0)
								direction += 360;

						// Command is RIGHT, add 90 to direction
						} else if (first == "RIGHT") {
							direction = (direction + 90) % 360;
						}

					}

				}

			}

			return direction;
		}
	

};