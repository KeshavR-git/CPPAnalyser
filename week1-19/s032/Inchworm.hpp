#ifndef INCHWORM_H
#define INCHWORM_H

class Inchworm
{
public:
	int lunchtime(int branch, int rest, int leaf) {
        return branch/lcm(rest, leaf) + 1;
    }
private:
    int gcd(int a, int b) {
        if (a == 0)
            return b;
        return gcd(b % a, a);
    }
    int lcm(int a, int b){
        return (a*b)/gcd(a, b);
    }
};

#endif
