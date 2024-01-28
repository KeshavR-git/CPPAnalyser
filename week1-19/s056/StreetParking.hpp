#include <string>
using namespace std;

class StreetParking {
public:
	int freeParks(string street) {
        string s = street;
	    int i, j, free = 0;
	    for(i = 0; i < street.size(); i++)
	    {
		    if(s[i] == 'D' || s[i] == 'S' || s[i] == 'B')
		    	continue;
            if(i + 1 < s.size() && s[i + 1] == 'S')
			    continue;
            if(i - 1 >= 0 && s[i - 1] == 'S')
                continue;
		    if(i + 1 >= 0 && s[i + 1] == 'B')
			    continue;
            if(i + 2 < s.size() && s[i + 2] == 'B')
                continue;
		    free++;
	    }
	    return free;
        };
};
