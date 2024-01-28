#ifndef EGGCARTONS_H
#define EGGCARTONS_H

class EggCartons {
public:
    int minCartons(int n) {
        if (n%2 != 0) return -1;
        else if (n%8 ==0) return n/8;
        else if (n-6 >= 0 && (n-6)%8 == 0) return (n-6)/8 +1;
        else if (n-12 >= 0 && (n-12)%8 == 0) return (n-12)/8 +2;
        else if (n-18 >= 0 && (n-18)%8 == 0) return (n-18)/8 +3;
        else if (n-24 >= 0 && (n-24)%8 == 0) return (n-24)/8 +4;
        else return -1;
    }
};

#endif
