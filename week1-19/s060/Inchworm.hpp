#ifndef INCHWORM_H
#define INCHWORM_H

class Inchworm{
    public:
        int lunchtime(int branch, int rest, int leaf){
            int pos = 0;
            int eaten = 0;
            while (pos <= branch){
                if (pos % leaf == 0){
                    eaten++;
                }
                pos+=rest;
            }
            return eaten;
        }
};

#endif