#include <vector>
#include <bits/stdc++.h>
#include <math.h>
int XX_MARKER_XX;


class CircularLine
{
public:
    // template <size_t n>
//     int longestTravel(std::vector<int> t)
//     {
//         std::vector<int> speedsOne;
//         std::vector<int> speedsTwo;
//         std::vector<int> speeds;
//         for (int i = 0; i < t.size(); i++)
//         {
//             for (int j = i + 1; j != i; j++)
//             {
//                 if (j >= t.size())
//                 {
//                     j = -1;
//                     continue;
//                 }
//                 // std::cout << j;
//                 int dist = 0;
//                 for (int k = i; k != j; k++)
//                 {
//                     if (k >= t.size())
//                     {
//                         k = -1;
//                         continue;
//                     }
//                     dist += t[k];
//                     // std::cout << "t[here] is: " << t[k] << std::endl;
//                 }
//                 std::cout << dist << " ";
//                 speedsOne.push_back(dist);
//             }
//         }
//         std::cout << std::endl;
//         for (int i = 0; i < t.size(); i++)
//         {
//             for (int j = i - 1; j != i; j--)
//             {
//                 if (j <= -1)
//                 {
//                     j = t.size();
//                     continue;
//                 }
//                 int dist = 0;
//                 for (int k = j; k != i-1; k--)
//                 {
//                     if (k <= -1)
//                     {
//                         k = t.size();
//                         continue;
//                     }
//                     dist += t[k];
//                 }
//                 std::cout << dist << " ";
//                 speedsTwo.push_back(dist);
//             }
//         }
//         std::cout << std::endl;
// //Have to do it from 01 and 10, not 01 and 50 ------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//         for (int i = 0; i < speedsTwo.size(); i++)
//         {
//             speeds.push_back(std::min(speedsOne[i], speedsTwo[i]));
//             std::cout << speedsOne[i] << ":" << speedsTwo[i] << ": so, " << std::min(speedsOne[i], speedsTwo[i]) << std::endl;
//         }
//         sort(speeds.begin(), speeds.end());
//         reverse(speeds.begin(), speeds.end());
//         std::cout << std::endl;
//         for (int i = 0; i < speeds.size(); i++)
//         {
//             std::cout << speeds[i] << ", ";
//         }
//         std::cout << std::endl;
//         return speeds[0];
//     }
};

// int longestTravel(std::vector<int> t)
//     {
//         std::vector<int> speedsOne;
//         std::vector<int> speedsTwo;
//         std::vector<int> speeds;
//         for (int i = 0; i < t.size(); i++)
//         {
//             for (int j = i + 1; j != i; j++)
//             {
//                 // std::cout << j << std::endl;
//                 // j++;
//                 if (j == t.size())
//                 {
//                     j = -1;
//                     continue;
//                 }
//                 int dist = 0;
//                 for (int k = std::min(i, j); k < std::max(i, j); k++)
//                 {
//                     if (k >= t.size())
//                     {
//                         k = 0;
//                         continue;
//                     }
//                     dist += t[k];
//                 }
//                 speedsOne.push_back(dist);
//                 std::cout << "1: Comparing slot: " << i << " and: " << j << " with dist: " << dist << "," << std::endl;
//             }
//             // std::cout << "now back" << std::endl;
//             for (int j = i - 1; j != i; j--)
//             {
//                 if (j <= 0)
//                 {
//                     j = t.size();
//                     continue;
//                 }
//                 int dist = 0;
//                 for (int k = std::max(i, j) - 1; k != std::max(i, j); k--)
//                 {
//                     if (k <= 0)
//                     {
//                         k = t.size();
//                         continue;
//                     }
//                     dist += t[k];
//                 }
//                 speedsTwo.push_back(dist);
//                 std::reverse(speedsTwo.begin(), speedsTwo.end());
//                 std::cout << "2: Comparing slot: " << i << " and: " << j << " with dist: " << dist << "," << std::endl;
//             }
//         }
//         for (int i = 0; i < speedsOne.size(); i++)
//         {
//             speeds.push_back(std::max(speedsOne[i], speedsTwo[i]));
//         }

//         sort(speeds.begin(), speeds.end());
//         while (speeds[0] == 0)
//         {
//             speeds.erase(speeds.begin());
//         }
//         sort(speeds.begin(), speeds.end(), std::greater<int>());
//         return speeds[0];
//     }