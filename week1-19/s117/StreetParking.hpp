#include <string>
#include <iostream>
#include <vector>

class StreetParking
{
public:
    int freeParks(std::string street)
    {
        int totalPlaces = street.size();
        std::vector<bool> checked;
        for (int i = 0; i < street.size(); i++)
        {
            checked.push_back(0);
        }
        // std::cout << street.size() << checked.size();
        for (int i = 0; i < street.size(); i++)
        {
            // int changed = 0;
            if (street[i] == 'D' && checked[i] == false)
            {
                totalPlaces--;
                checked[i] = true;
                // changed++;
            }
            if (street[i] == 'B' && checked[i] == false) //check can be left in here bc if B is fake, that must have an S infront of it so the whole of B is negated anyway.
            {
                totalPlaces--;
                checked[i] = true;
                // changed++;
                if (i - 1 >= 0)
                    if (checked[i - 1] == false)
                    {
                        totalPlaces--;
                        checked[i - 1] = true;
                        // changed++;
                    }
                if (i - 2 >= 0)
                    if (checked[i - 2] == false)
                    {
                        totalPlaces--;
                        checked[i - 2] = true;
                        // changed++;
                    }
            }
            if (street[i] == 'S')
            {
                if (checked[i] == false)
                {
                    totalPlaces--;
                    checked[i] = true;
                    // changed++;
                }
                if (i - 1 >= 0)
                {
                    if (checked[i - 1] == false)
                    {
                        totalPlaces--;
                        checked[i - 1] = true;
                        // changed++;
                    }
                }
                if (i + 1 < street.size())
                {
                    if (checked[i + 1] == false)
                    {
                        totalPlaces--;
                        checked[i + 1] = true;
                        // changed++;
                    }
                }
            }
            // // std::cout << i << ": " << street[i] << ". Changed: " << changed << std::endl;
        }
        if (totalPlaces < 0)
        {
            totalPlaces = 0;
        }
        return totalPlaces;
    }
};