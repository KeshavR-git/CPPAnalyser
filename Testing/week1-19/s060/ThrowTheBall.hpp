int XX_MARKER_XX;
#ifndef BALL_H
#define BALL_H

class ThrowTheBall{
    public:
        int timesThrown(int N, int M, int L){
            // Prep catch amounts
            int received[N];
            for (int i = 0; i < N; i++){
                received[i] = 0;
            }
            received[0]++;

            int pos = 0;
            int throws = 0;

            while (received[pos] < M){
                // Even
                if (received[pos] % 2 == 0){
                    pos+=L;
                // Odd
                } else {
                    pos-=L;
                }

                // Fix pos
                while (pos >= N){
                    pos-=N;
                }
                while (pos < 0){
                    pos+=N;
                }

                received[pos]++;
                throws++;
            }
            return throws;
        }
};

#endif