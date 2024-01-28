#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;



class CircularLine {
   public:
   int longestTravel(vector <int> t)
  {
  
    int large, small;
    int in, out;
    int longest = 0;

    for (int i = 0; i < t.size(); i++)
      {
		for (int j = 0; j < t.size(); j++)
		  {
		    if (i == j)
		      continue;

			 large = max(i, j);
			 small = min(i, j);

			    in = 0;

		    for (int k = small; k < large; k++)
		      in += t[k];

		    	out = 0;

		    for (int k = 0; k < t.size(); k++)
		      if (k < small || k >= large)
				out += t[k];

		    	if (longest < min(in, out))
		      		longest = min(in, out);
		  	}
     	 }
    return longest;
}
};