#include <iostream>
using namespace std;
int XX_MARKER_XX;

#define IS_ODD(n) ( n % 2 )


class ThrowTheBall {

public:

    /**
     * 
     * @param N number of friends, between 3 and 50
     * @param M maximum receive times per player, between 1 and 50
     * @param L pass ball to L persons left or right, between 1 and N - 1
     * @return number of times that the ball is passed
     */
    int timesThrown(int N, int M, int L) {

        if (N < 3 || N > 50 || M < 1 || M > 50 || L < 1 || L > (N - 1)) return -1;

        int res = 0;
        int arr[N];

        int i;
        for (i = 0; i < N; i++) arr[i] = 0;

        int curr = 0;
        arr[curr] += 1;
        while (arr[curr] < M) {
            if (IS_ODD(arr[curr])) {
                if (curr < L) curr += N;
                curr -= L;
            } else {
                curr = (curr + L) % N;
            }
            arr[curr]++;
            res++;
        }

        return res;
    }
};