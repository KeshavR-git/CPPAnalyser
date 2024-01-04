#include <iostream>
#include <string>

int main()
{
    int end = 5;
    // Pattern 12 - Variation 1
    for (int i = 0; i < end; i++)
    {
        if (i == end - 1)
        {
            std::cout << "i == end - 1";
        }
        else
        {
            std::cout << "i != end - 1";
        }
    }

    // Pattern 12 - Variation 2
    for (int i = 0; i < end; i++)
    {
        if (i == 0)
        {
            std::cout << "i == 0";
        }
        else
        {
            std::cout << "i != 0";
        }
    }

    // Pattern 12 - Variation 2
    for (int i = 1; i < end; i++)
    {
        if (i == 1)
        {
            std::cout << "i == 1";
        }
        else
        {
            std::cout << "i != 1";
        }
    }

    return 0;
}