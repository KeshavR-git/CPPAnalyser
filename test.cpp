#include <iostream>
#include <string>

int main() {
    int x;

    // Pattern 5

    if (x == 0) {

    } else if (x != 0) {

    }

    // Pattern 10
    for (int i = 0; i < 10; i++) {
        std::string* input = new std::string("Repeated String");
        std::cout << *input << std::endl;
        delete input;
    }

    for (int i = 0; i < 10; i++) {
        int* num = new int(5);
        std::cout << *num << std::endl;
        delete num;
    }

    return 0;
}