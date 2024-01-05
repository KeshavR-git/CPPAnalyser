#include <iostream>
#include <vector>
using namespace std;
int XX_MARKER_XX;


class CircularLine
{
    public:
        
    int longestTravel(vector<int> t)
    {
        int final = 0;

        for (int i = 0; i < t.size(); i++)
        {
            for (int j = i + 1; j < t.size(); j++)
            {
                /**
                 * Store the different path lengths
                 */
                int path_right = 0, path_left = 0;

                /**
                 * Calculate the right side of the path starting at 'i' to
                 * 'j'
                 */
                for (int k = i; k < j; k++) 
                    path_right += t.at(k);

                /**
                 * Calculate the left side of the path by going backwards
                 * from 'j' to 'i'
                 */
                for (int k = j; k < t.size(); k++)
                    path_left += t.at(k);

                for (int k = 0; k < i; k++)
                    path_left += t.at(k);

                /**
                 * Find the maximum of the shortest paths
                 */
                final = max(final, min(path_right, path_left));
            }
        }

        return final;
    }

    private:

    /**
     * Find the maximum number between two numbers
     */
    int max(int x, int y)
    {
        return x >= y ? x : y;
    }

    /**
     * Find the minimum number between two numbers
     */
    int min(int x, int y)
    {
        return x <= y ? x : y;
    }
};