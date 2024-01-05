#include <string>
#include <vector>
using namespace std;
int XX_MARKER_XX;
#ifndef STREETPARKING_H
#define STREETPARKING_H



class StreetParking {
public:
    int freeParks(string street) {
        int l = street.length();
        std::vector<int> vec(l, 1);
        for (int i = 0; i <  l; i++) {
            switch(street[i]) {
                case 'D': vec[i] = 0;
                        break;
                case 'B': vec[i] = 0;
                        vec[clamp(i-1, 0, l)] = 0;
                        vec[clamp(i-2, 0, l)] = 0;
                        break;
                case 'S': vec[i] = 0;
                        vec[clamp(i+1, 0, l)] = 0;
                        vec[clamp(i-1, 0, l)] = 0;
                        break;
            }
        }
        int count = 0;
        for (int i = 0; i < vec.size(); i++) {
            count += vec[i];
        }
        return count;
    }
private:
    int clamp(int x, int min, int max) {
        if (x < min) x = min;
        if (x > max) x = max;
        return x;
    }
};
#endif
