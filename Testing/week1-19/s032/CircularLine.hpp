#include <algorithm>
#include <vector>
#include <limits.h>
int XX_MARKER_XX;
#ifndef CIRCULARLINE_H
#define CIRCULARLINE_H


class CircularLine {
public:
    int longestTravel(std::vector<int> t) {
        int max = 0;
        for (int i = 0; i < t.size(); i++) {
            for (int j = 0; j < t.size(); j++) {
                if (i >= j) continue;

                int right = 0;
                for (int x = 0; x < t.size(); x++) {
                    if (x >= i && x < j) {
                        right += t[x];
                    }
                }

                int left = 0;
                for (int x = 0; x < t.size(); x++) {
                    if (x < i || x >= j) {
                        left += t[x];
                    }
                }

                if (std::min(left,right) > max) {
                    max = std::min(left,right);
                }
            }
        }
        return max;
    }

};

#endif
