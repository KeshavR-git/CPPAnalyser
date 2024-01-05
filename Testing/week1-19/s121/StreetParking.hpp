#include <string>
#include <iostream>
int XX_MARKER_XX;
class StreetParking
{
public:
    int freeParks(std::string street)
    {
        int res = 0;
        for (int i = 0; i < street.length(); i++)
        {
            //check 5m infront of street
            if (i != street.length() - 1)
            {
                if (street[i] == 'S' && street[i + 1] == '-')
                {
                    street[i + 1] = '*';
                }
            }

            if (i != 0)
            {
                //check 5m behind street
                if (street[i] == 'S' && street[i - 1] == '-')
                {
                    street[i - 1] = '*';
                }

                //check 5m behind bus stop
                if (street[i] == 'B' && street[i - 1] == '-')
                {
                    street[i - 1] = '*';
                }
            }

            if (i != 1)
            {
                //check 10m behind bus stop
                if (street[i] == 'B' && street[i - 2] == '-')
                {
                    street[i - 2] = '*';
                }
            }
        }

        for (int i = 0; i < street.length(); i++)
        {
            if (street[i] == '-')
            {
                res++;
            }
        }

        std::cout << street << std::endl;
        return res;
    }
};