#include <iostream>
#include <string>

int main() {
    // Pattern 10

    for (int i = 0; i < 10; i++) {
        std::string* input = new std::string("Repeated String");
        std::cout << *input << std::endl;
        delete input;
    }

    return 0;
}