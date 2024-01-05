#include <iostream>
#include <string>
#include <vector>
#include <sstream>
int XX_MARKER_XX;
#ifndef PARTYSEATS_H
#define PARTYSEATS_H


class PartySeats
{
public:
	// A function to determine a seating plan
	std::vector<std::string> seating(std::vector<std::string> attendees)
	{
		std::vector<std::string> plan;
		plan.clear();

		if (attendees.size()%2 == 1)
		{
			return plan;
		}

		std::vector<std::string> boys;
		std::vector<std::string> girls;

		// Iterate through the attendees and sort into male and female
		for (int i=0; i<attendees.size(); i++)
		{
			std::istringstream ss(attendees.at(i));
			std::string token;
			while (getline(ss, token, ' '))
			{
				plan.push_back(token);
			}

			// For male attendees
			if (plan.at(1)=="boy")
			{
				if (boys.size()==0)
				{
					boys.push_back(plan.at(0));
				}
				else
				{
					bool lastName = true;
					for (int j=0; j<boys.size(); j++)
					{
						if (plan.at(0)<boys.at(j))
						{
							boys.insert(boys.begin()+j, plan.at(0));
							lastName = false;
							break;
						}
					}

					if (lastName==true)
					{
						boys.push_back(plan.at(0));
					}
				}
			}
			// For female attendees
			else if (plan.at(1)=="girl")
			{
				if (girls.size()==0)
				{
					girls.push_back(plan.at(0));
				}
				else
				{
					bool lastName = true;
					for (int j=0; j<girls.size(); j++)
					{
						if (plan.at(0)<girls.at(j))
						{
							girls.insert(girls.begin()+j, plan.at(0));
							lastName = false;
							break;
						}
					}

					if (lastName==true)
					{
						girls.push_back(plan.at(0));
					}
				}
			}
			plan.clear();
		}

		// Check the boy and girl numbers are equal and divisible by 2
		if (boys.size()!=girls.size())
		{
			return plan;
		}
		else if (boys.size()%2==1)
		{
			return plan;
		}

		// Populate the seating plan
		plan.push_back("HOST");
		girls.insert(girls.begin()+girls.size()/2, "HOSTESS");
		while (boys.size()>0 || girls.size()>0)
		{
			if (plan.size()%2==0)
			{
				plan.push_back(boys.at(0));
				boys.erase(boys.begin());
			}
			else
			{
				plan.push_back(girls.at(0));
				girls.erase(girls.begin());
			}
		}

		return plan;
	}
};

#endif