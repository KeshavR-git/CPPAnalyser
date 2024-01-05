#include <string>
#include <vector>
int XX_MARKER_XX;

class PartySeats
{
	std::string search(std::vector<std::string> &attendees, bool girl)
	{
		std::string temp = "{";
		int location = 0;

		for(int i=0; i<attendees.size(); i++)
		{
			if(!attendees.at(i).empty())
			{
				std::size_t result = attendees.at(i).find(" ");
				std::string gender = attendees.at(i).substr(result+1);
				std::string name = attendees.at(i).substr(0,result);

				if(gender.compare("girl")==0 && girl)
				{
					if(name.compare(temp)<0)
					{
						temp = name;
						location = i;
					}
				}
				else if(gender.compare("boy")==0 && !girl)
				{
					if(name.compare(temp)<0)
					{
						temp = name;
						location = i;
					}
				}
			}
		}

		attendees.at(location) = "";

		return temp;
	}

public:
	std::vector<std::string> seating(std::vector<std::string> attendees)
	{
		std::vector<std::string> res;

		int boys = 0;
		int girls = 0;

		for(int i=0; i<attendees.size(); i++)
		{
			std::size_t result = attendees.at(i).find(" ");
			std::string gender = attendees.at(i).substr(result+1);
			
			if(gender.compare("girl")==0)
			{
				girls++;
			}
			else
			{
				boys++;
			}
		}

		if(girls!=boys)
		{
			return res;
		}

		res.push_back("HOST");

		bool girl = true;
		int half = attendees.size()/2;

		for(int i=0; i<=attendees.size(); i++)
		{
			if(i==half)
			{
				if(girl)
				{
					res.push_back("HOSTESS");
				}
				else
				{
					std::vector<std::string> dummy;

					return dummy;
				}
			}
			else
			{
				res.push_back(search(attendees, girl));
			}

			girl = !girl;
		}

		return res;
	}
};
















