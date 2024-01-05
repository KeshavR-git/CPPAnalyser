#include <iostream>
#include <stdlib.h>
#include <vector>
#include <string>
int XX_MARKER_XX;

std::ostream &operator<<(std::ostream &o, std::vector<std::string> v){  //Print vector
    for (auto x: v) o << x;
    return o;
}

class AzimuthMonitoring {
    public:
    int getAzimuth(std::vector<std::string> instructions) {
        //std::cout << instructions << std::endl;
        //std::cout << "\n";
        int angle = 0;
        std::string dir;   //Directions
        std::string deg;    //Degree
        
        for(int i = 0; i < instructions.size(); i++) {
            dir = instructions[i].substr(0, instructions[i].find(' ')); //Read until whitespace
            deg = instructions[i].substr(instructions[i].find(' ') + 1);    //Store characters after whitespace
            //std::cout << "Current instruction: " << instructions.at(i) << std::endl;
            if(instructions.at(i) == "LEFT") {
                //std::cout << "LEFT" << std::endl;
                angle -= 90;
                //std::cout << "Angle: " << angle << std::endl;
            }
            else if(instructions.at(i) == "RIGHT") {
                //std::cout << "RIGHT" << std::endl;
                angle += 90;
                //std::cout << "Angle: " << angle << std::endl;
            }
            else if(instructions.at(i) == "TURN AROUND") {
                //std::cout << "TURN AROUND" << std::endl;
                angle -= 180;
                //std::cout << "Angle: " << angle << std::endl;
            }
            else if(instructions.at(i) == "HALT") {
                //std::cout << "HALT" << std::endl;
                //std::cout << "Angle: " << angle << std::endl;
                return angle;
            }
            else {
                if(dir == "LEFT") {
                    //std::cout << "LEFT " << deg << std::endl;
                    angle -= std::stoi(deg);
                }
                else if(dir == "RIGHT") {
                    //std::cout << "RIGHT " << deg << std::endl;
                    angle += std::stoi (deg);
                }
            }
            if(angle < 0) {
                angle += 360;
                //std::cout << "Fixed angle: " << angle << std::endl;
            }
            else if(angle > 360) {
                angle -= 360;
                //std::cout << "Fixed angle: " << angle << std::endl;
            }
        }

        return angle;
    }
};