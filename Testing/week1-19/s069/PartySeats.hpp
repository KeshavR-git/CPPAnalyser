#include <string.h>
#include <vector>
#include <iostream>
using namespace std;
int XX_MARKER_XX;
#ifndef PARTYSEATS_H
#define PARTYSEATS_H



class PartySeats
{
	public:
	vector<string> seating(vector<string> attendees)  // Sort the attendees into order
	{
		vector<string> boylist, girllist;

		for (unsigned int i = 0; i < attendees.size(); i++)  // Sort boys and girls into two seperate lists
		{
			for (unsigned int j = 0; j < attendees[i].size(); j++)
			{
				if (attendees[i][j] == ' ')
				{
					if (attendees[i].find("boy") != string::npos)
					{
						boylist.push_back(attendees[i].substr(0, j));
					} else
					{
						girllist.push_back(attendees[i].substr(0, j));
					}
				}
			}
		}

		vector<string> out;  // Create empty output string

		if (boylist.size() != girllist.size()) return out;  // Check if there are the same number of girls as boys
		if ((boylist.size() + girllist.size()) % 2 != 0) return out;  // Check if there is an even number of attendees

		out.push_back("HOST");  // First attendee is always the host

		for (int i = 0; i < boylist.size(); i++)  // Loop through all attendees
		{
			if (i < boylist.size()/2)  // While scroller is less than half way done the lists order "girl, boy"
			{
				out.push_back(girllist[i]);
				out.push_back(boylist[i]);
			} else  // While scroller is greater than half way done the lists order "boy, girl"
			{
				out.push_back(boylist[i]);
				out.push_back(girllist[i]);
			}

			if (i == boylist.size()/2)  // Add hostess to the middle of the group so she is opposite to host
			{
				out.push_back("HOSTESS");
			}
		}

		return out;
	}
	
};

#endif