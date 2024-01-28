#include <iostream>
#include <string>
 
 
class StreetParking
{
  public:
  int freeParks(std::string street)
  {
    int ans = 0;
	int len = street.length();
	std::string mod = "00";

	//std::cout << street << std::endl;
	street.append("0");
	mod.append(street);
	//std::cout << mod << std::endl;

	for (int i = 2; i <= len+1; i++)
	{
		if (mod[i] != '-')
		{
			continue;
		}
		if (mod[i + 1] == 'S')
		{
			continue;
		}
		if (mod[i-1] == 'S')
		{
			continue;
		}
		if (mod[i+1] == 'B')
		{
			continue;
		}
		if (mod[i + 2] == 'B')
		{
			continue;
		}
		ans++;
	}
	return ans;
  }
};