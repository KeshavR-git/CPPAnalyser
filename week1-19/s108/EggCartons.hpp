#include <iostream>
#include <stdlib.h>

class EggCartons {
    public:
    int minCartons(int n) {
        int cartons = 0;
        int carton6 = 101;
        int carton8 = 101;
        int cartontype = 0;
        bool divide6 = false;
        bool divide8 = false;

        //std::cout << "n: " << n << std::endl;

        //Base case
        if(n == 6 || n == 8) {
            return cartons;
        }
        else if(n < 6 || (n < 8 && n < 6)) {
            return -1;
        }
        else if(n % 2 == 0) {
            //std::cout << "Even number of eggs" << std::endl;
            divide6 = check(n, 6);
            divide8 = check(n, 8);
            //std::cout << "Divide 6: " << divide6 << std::endl;
            //std::cout << "Divide 8: " << divide8 << std::endl;
        }
        else {
        //std::cout << "Odd number of eggs" << std::endl;
            return -1;
        }
        if(divide6 == true) {
            carton6 = n/6;
            //std::cout << "Carton 6: " << carton6 << std::endl;
        }
        if(divide8 == true) {
            carton8 = n/8;
            //std::cout << "Carton 8: " << carton8 << std::endl;
        }
        if(carton6 < carton8) {
            cartons = carton6;
            //std::cout << "Carton 6 is least" << std::endl;
        }
        else {
            cartons = carton8;
            //std::cout << "Carton 8 is least" << std::endl;
        }
        //std::cout << "Total cartons: " << cartons << std::endl;
        return cartons;
    }
    bool check(int n, int cartontype) {
        int count = n;
        if(cartontype == 6) {
            if(n % 6 == 0) {
                //std::cout << "Divisible by 6" << std::endl;
                return true;
            }
            else {
                //std::cout << "Not divisible by 6" << std::endl;
                return false;
            }
        }
        else if(cartontype == 8) {
            if(n % 8 == 0) {
                //std::cout << "Divisible by 8" << std::endl;
                return true;
            }
            else {
                //std::cout << "Not divisible by 8" << std::endl;
                return false;
            }
        }
    }
};