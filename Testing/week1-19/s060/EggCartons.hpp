int XX_MARKER_XX;
#ifndef EGGCARTONS_HPP
#define EGGCARTONS_HPP

class EggCartons{
    public:
        int minCartons(int n){
            // Create array of maximum cartons
            int size = (n+7)/8;
            int * eggs = new int[size];

            // Fill with cartons of 8
            for (int i = 0; i < size; i++){
                *(eggs + i) = 8;
            }

            // Swap 8's for 6's until <= n
            int pos = 0;
            while (true){
                int sum = 0;
                for (int i = 0; i < size; i++){
                    sum+=*(eggs+i);
                }
                if (sum > n){
                    *(eggs+pos) = 6;
                    pos++;
                    if (pos > size){
                        return -1;
                    }
                } else if (sum == n){
                    return size;
                } else {
                    return -1;
                }
            }
        }
};

#endif