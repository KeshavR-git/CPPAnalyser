#include <string> 
#include <vector>
using namespace std;
 
 
class DownloadingFiles
{
  public:
  double actualTime(vector<string> tasks)
  {
    // your code for the problem
    int size = tasks.size();

	// This block of code is to split the string by whitespace
    double total_data = 0;
    double total_speed = 0;

    for (int i = 0; i < size; i++)
    {
    	int size_of_element = tasks[i].length();
    	string recent_speed;
    	string recent_time;
    	string recent_element = tasks[i];
    	bool isSpeed = true;

    	for (int j = 0; j < size_of_element; j++)
    	{
    		if (recent_element[j] == ' ')
    		{
    			isSpeed = false;
    		}

    		if ( isSpeed )
    		{
    			recent_speed = recent_speed + recent_element[j];
    		}else{
    			recent_time = recent_time + recent_element[j];
    		}
    	}

    	total_data = total_data + stod(recent_speed) * stod(recent_time);
    	total_speed = total_speed + stod(recent_speed);
    }

    return total_data/total_speed;  // return your result
  }
};
