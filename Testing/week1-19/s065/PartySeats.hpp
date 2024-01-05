#include <string>
#include <vector>
using namespace std;
int XX_MARKER_XX;

class PartySeats
{
public:
	bool a_b(string a, string b)
	{
		char z = 0;
		while(a.length() > b.length())
		{
			b += z;
		}

		for (int i = 0; i < a.length(); i++)
		{
			if (a[i] < b[i])	return false;
			if (a[i] > b[i])	return true;
		}
		return false;
	};

	vector<string> add(vector<string> vs, string name)
	{
		for (int i = 0; i < vs.size(); i++)
		{
			if (a_b(vs[i], name))
			{
				vs.insert(vs.begin() + i, name);
				return vs;
			}
		}
		vs.push_back(name);
		return vs;
	};


	vector<string> seating(vector<string> attendees)
	{
		vector<string> list;
		vector<string> boy;
		vector<string> girl;
		int size = attendees.size();
		if (size % 4 != 0 || size == 0)
		{
			return list;
		}
		for (int i = 0; i < size; i++)
		{
			int space = 0;
			while(attendees[i][space] != ' ')
			{
				space++;
			}
			string name = (attendees[i].substr(0, space));
			string gender = (attendees[i].substr(space + 1));
			if (gender == "boy")
			{
				boy = add(boy, name);
				//boy.push_back(name);
			}
			else
			{
				girl = add(girl, name);
				//girl.push_back(name);
			}
		}
		if (boy.size() != girl.size())
		{
			return list;
		}
		list.push_back("HOST");
		int b = 0;
		int g = 0;
		for (int i = 0; i < size / 2; i++)
		{
			if (i % 2 == 0)
			{
				list.push_back(girl[g]);
				g++;
			}
			else
			{
				list.push_back(boy[b]);
				b++;
			}
		}
		list.push_back("HOSTESS");
		for (int i = 0; i < size / 2; i++)
		{
			if (i % 2 == 1)
			{
				list.push_back(girl[g]);
				g++;
			}
			else
			{
				list.push_back(boy[b]);
				b++;
			}
		}
		// for (int i = 0; i < girl.size(); ++i)
		// {
		// 	cout<<boy[i]<<'\n';
		// }
		return list;
	};
};