#include <iostream>
#include <vector>

class AzimuthMonitoring
{
public:
	int getAzimuth(std::vector<std::string> instructions) {
		int azimuth = 0;

		for (int i = 0; i < instructions.size(); ++i)
		{
			if (instructions[i] == "LEFT")
			{
				azimuth = azimuth - 90;
			} else if (instructions[i] == "TURN AROUND") {
				azimuth = azimuth + 180;
			} else if (instructions[i] == "RIGHT") {
				azimuth = azimuth + 90;
			} else if (instructions[i][0] == 'L' && instructions[i][3] == 'T' && instructions[i][4] == ' ') {
				std::string number;
				if (instructions[i].size() == 6)
				{
					number.push_back(instructions[i][5]);
				} else if (instructions[i].size() == 7) {
					number.push_back(instructions[i][5]);
					number.push_back(instructions[i][6]);

				} else if (instructions[i].size() == 8) {
					number.push_back(instructions[i][5]);
					number.push_back(instructions[i][6]);
					number.push_back(instructions[i][7]);
				}

				azimuth = azimuth - std::stoi(number);

			} else if (instructions[i] == "HALT") {
				return azimuth;
			} else if (instructions[i][0] == 'R' && instructions[i][5] == ' ') {
				std::string number;
				if (instructions[i].size() == 7)
				{
					number.push_back(instructions[i][6]);
				} else if (instructions[i].size() == 8) {
					number.push_back(instructions[i][6]);
					number.push_back(instructions[i][7]);
					std::cout << number << " ";

				} else if (instructions[i].size() == 9) {
					number.push_back(instructions[i][6]);
					number.push_back(instructions[i][7]);
					number.push_back(instructions[i][8]);
				}

				azimuth = azimuth + std::stoi(number);
				
			}

			if (azimuth < 0)
			{
				azimuth = azimuth + 360;
			}
			if (azimuth == 360)
			{
				azimuth = 0;
			}
			if (azimuth > 360) {
				azimuth = azimuth - 360;
			}
		}

		return azimuth;
	}
	
};