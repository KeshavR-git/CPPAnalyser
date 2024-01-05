	#include <vector>
using namespace std;
int XX_MARKER_XX;



class StreetParking
{
public:
	int freeParks(string result){
		int s = result.length();
		int ans = 0;
		for (int i = 0; i < result.length(); i++) {

			if (result[i] == 'B') {
				if (i == 0) {
					result[i] = 'x';
				}
				else if (i == 1) {
					result[i] = 'x';
					result[i - 1] = 'x';
				}
				else {
					result[i] = 'x';
					result[i - 1] = 'x';
					result[i - 2] = 'x';
				}
			}

			else if (result[i] == 'S') {
				if (i == 0) {
					result[i] = 'x';
					if (result[i + 1] != 'S') {
						result[i + 1] = 'x';
					}
					

				}
				else if (i == s-1) {
					result[i - 1] = 'x';
					result[i] = 'x';
				}
				else {
					result[i] = 'x';
					result[i - 1] = 'x';
					if (result[i + 1] != 'S') {
						result[i + 1] = 'x';
					}
				}
			}
			else if (result[i] == 'D') {
				result[i] = 'x';
			} 
		}
		for (int i = 0; i < s; i++) {
			if (result[i] == 'x') {
				ans++;
			}
		}

		return s-ans;
	}

};