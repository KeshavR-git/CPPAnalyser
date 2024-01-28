#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <cctype>
#include <cmath>
using namespace std;

class PartySeats
{
	public:
	string[] seating(String[] attendees);
	{
		string[] ans;
		vector<string> Boys;
		vector<string> Girls;
	//sort into vectors
		for (i=0; i<sizeof(attendees)/sizeof(attendees[0]); i++)
		{
			size_t Boy = attendees[i].find("boy");
			size_t Girl = attendees[i].find("girl");
			if (boy!=string::npos)
			{
				for (i=0; i<4; i++)
				{
					attendees[i].pop_back();
				}
				Boys.push_back(attendees[i]);
			}
			if (girl!=string::npos)
			{
				for (i=0; i<5; i++)
				{
					attendees[i].pop_back();
				}
				Girls.push_back(attendees[i]);
			}
		}
	//alphabetise vectors
		sort (Girls.begin(), Girls.end());
		sort (Boys.begin(), Boys.end());
		if (Boys.size() % 2 != 0 || Boys.size() != Girls.size())
		{
			return ans;
		}
		int j=0;
		for (i=0; i<Boys.size())
		{
			ans[j]=Girls[i]
			j++;
			ans[j]=Boys[i]
			j++;
			if (i=Boys.size()/2)
			{
				ans[j]="HOSTESS";
				j++;
			}
		}
		return ans;
	}

};
