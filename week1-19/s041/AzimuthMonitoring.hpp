using namespace std;
#include <vector>
 
class AzimuthMonitoring
{
  public:
  int getAzimuth(vector<string> instructions){
	int robot = 0;
	int size = instructions.size();

	for(int i = 0; i < size; i++){
		if(instructions[i] == "RIGHT"){
			robot+=90;
		}
		else if (instructions[i] == "LEFT"){
			if(robot >= 0){
				robot-=90;
			}
			else{
				robot= robot + (-90);
			}
		}
		else if (instructions[i] == "TURN AROUND"){
			if(robot == 180){
				robot-=180;
			}
			else{
				robot+= 180;
			}
		}
		else if (instructions[i] == "HALT"){
			return robot;
		}
		else{

			if(instructions[i][0] == 'L'){
				int length = instructions[i].size();
				int num = 0;
				int ten = 1;
				while(isdigit(instructions[i][length])){
					num*=10;
					num+= int(instructions[i][length]) - 48 * ten;
					ten*=10;
					length-=1;
				}
				robot-=num;
			}
			else{
				int length = instructions[i].size()-1;
				int num = 0;
				int ten = 1;
				while(isdigit(instructions[i][length])){
					num+= (int(instructions[i][length]) - 48) * ten;
					ten*=10;
					length-=1;
				}
				robot+=num;
			}
		}

		if(robot < -360){
			robot= 0 - robot;
		}
		if(robot > 360){
			robot = 360 - robot;
		}
	}

	return robot;
	}
};