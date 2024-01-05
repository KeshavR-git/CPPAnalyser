#include <iostream>
#include <string>
#include <vector>
using namespace std;
int XX_MARKER_XX;
#ifndef CIRCULARLINE_H
#define CIRCULARLINE_H



class CircularLine {
    int min(int a, int b) {
        if (a < b) {
            return a;
        } else {
            return b;
        }
    }
    int max(int a, int b) {
        if (a > b) {
            return a;
        } else {
            return b;
        }
    }
    int r_path(vector<int> t, int r_pos, int end_pos, int l) {
        int result = 0;
        for (int k = 0; k < l-1; k++) {
            if (r_pos == end_pos) {
                return result;
            }
            result += t[r_pos];
            r_pos++;
            if (r_pos == l) {
                r_pos = 0;
            }
        }
        return result;
    }
    int l_path(vector<int> t, int l_pos, int end_pos, int l) {
        int result = 0;
        for (int k = 0; k < l-1; k++) {
            if (l_pos+1 == 0) {
                l_pos = l-1;
            }
            result += t[l_pos];
            if (l_pos == end_pos) {
                return result;
            }
            l_pos--;
            if (l_pos == -1) {
                l_pos = l-1;
            }
        }
        return result;
    }
public:
    int longestTravel(vector<int> t) {
        int result = 0;
        int path_max = 0;
        int l = t.size();
        int temp1 = 0;
        int temp2 = 0;
        int path_min = 0;
        int minimum = 0;
        
        for (int i = 0; i < l; i++) {
            for (int j = 0; j < l; j++) {
                if (i == j) {
                    continue;
                }
                
                int end_pos = j;
                int r_pos = i;
                int l_pos = i-1;
//                path_min = min((r_path(t, r_pos, end_pos, l)), (l_path(t, l_pos, end_pos, l)));
                
                temp1 = r_path(t, r_pos, end_pos, l);
                temp2 = l_path(t, l_pos, end_pos, l);
//                cout << "r: " << temp1 << " l: " << temp2 << endl;
                minimum = min(temp1, temp2);
//                cout << "min: " << minimum << endl;
                result = max(result, minimum);
                
//                cout << "from " << i << " - " << j << ": " << " right: " << temp1 << " left: " << temp2 << endl;
                
//                cout << "shortest path from " << i << " to " << j << ": " << path_min << endl;
            }
//            cout << result << " and " << path_min << endl;
            
        }
        
        return result;
    }
};

#endif

