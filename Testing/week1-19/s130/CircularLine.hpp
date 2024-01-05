#include <vector>
#include <string>
int XX_MARKER_XX;

class CircularLine
{
public:
    int longestTravel(std::vector<int> t)
    {
        std::vector<int> routeTimes;
        int sum = 0;
        int leftWay = 0;
        int rightWay = 0;
        int longestTravelTime = 0;
        //finds the total sum of the line
        for (int i = 0; i < t.size(); i++)
        {
            sum += t.at(i);
        }

        //finds the optimal routes between each pair of stations
        for (int i = 0; i < t.size(); i++)
        {
            rightWay = t.at(i);
            leftWay = sum - t.at(i);
            for (int j = 0; j < t.size(); j++)
            {
                //so stations aren't repeated
                if (j < i)
                {
                    continue;
                }
                else
                {
                    if (j > i)
                    {
                        rightWay += t.at(j);
                        leftWay -= t.at(j);
                    }
                    //stores the optimal travel route between the selected staions
                    if (rightWay < leftWay)
                    {
                        routeTimes.push_back(rightWay);
                    }
                    else
                    {
                        routeTimes.push_back(leftWay);
                    }
                }
            }
        }

        //selects the longest travel time of the optimal routes
        for (int i = 0; i < routeTimes.size(); i++)
        {
            if (routeTimes.at(i) > longestTravelTime)
            {
                longestTravelTime = routeTimes.at(i);
            }
        }
        return longestTravelTime;
    }
};
