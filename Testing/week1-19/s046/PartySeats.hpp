#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int XX_MARKER_XX;


class PartySeats
{
public:
vector<string> seating(vector<string> attendees)
{
	vector<string> boy;
	vector<string> girl;
	string name;
	string tempname;
	vector<string> out;
	if (attendees.size() < 4 || (attendees.size()/2)%2 == 1)
	{
		return {};
	}


	for (int i = 0; i < attendees.size(); ++i)
	{
		tempname = attendees[i];
		name = tempname[0];
		for (int j = 1; j < attendees[i].size(); ++j)
		{
			if (tempname[j] == ' ')
			{
				if (tempname[j+1] == 'b')
				{
					boy.push_back(name);
					break;
				}
				else if (tempname[j+1] == 'g')
				{
					girl.push_back(name);
					break;
				}
			}
			name = name + tempname[j];
		}
	}

	if (boy.size() != girl.size())
	{
		return {};
	}

	sort(boy.begin(),boy.end());
	sort(girl.begin(),girl.end());

	out.push_back("HOST");

	for (int i = 0; i < boy.size(); ++i)
	{
		if (i < (boy.size()/2))
		{
			out.push_back(girl[i]);
			out.push_back(boy[i]);
		}
		else if (i == (boy.size()/2))
		{
			out.push_back("HOSTESS");
			out.push_back(boy[i]);
			out.push_back(girl[i]);
		}
		else if(i > (boy.size()/2))
		{
		out.push_back(boy[i]);
		out.push_back(girl[i]);
		}
	
	}
	return out;
}
};