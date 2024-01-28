#include <sstream>
#include <string>
#include <vector>
using namespace std;

class AzimuthMonitoring
{   
    
    public:

    int extractDegree(string instruction) {
        istringstream iss(instruction);
        string command;
        int degree;
        iss >> command >> degree ;
        return degree;
    }

    int fix(int degree) {
    	//to make it within 0-360
        while (degree < 0)
        {
            degree += 360;
        }
        while (degree >= 360)
        {
            degree -= 360;
        }
        return degree;
    }

    int getAzimuth(vector<string> instructions) {
        int answer = 0;
        for (int i = 0; i < instructions.size(); ++i) {
            
            
            if (instructions[i] == "LEFT") {
                answer -= 90;
            }
            else if (instructions[i] == "RIGHT") {
                answer += 90;
            }
            else if (instructions[i] == "TURN AROUND") {
                answer += 180;
            }
            else if (instructions[i].find("LEFT ") != string::npos) {
                 answer -= extractDegree(instructions[i]);
            }
            else if (instructions[i].find("RIGHT ") != string::npos) {
                 answer += extractDegree(instructions[i]);
            }
            else if (instructions[i] == "HALT" ) {
                answer = fix(answer);
                return answer;
            }
            
        }
        answer = fix(answer);
        return answer;
    }

};