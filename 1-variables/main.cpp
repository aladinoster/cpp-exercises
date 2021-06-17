#include <iostream>

int main()
{
    int variable = 8;            // -2b / 2b
    unsigned int variable2 = 10; // 0 / 4b
    char a = 65;                 // 1byte
    char car = 'a';              //
    short b = 2;                 // 2bytes
    int c = 4;                   // 4bytes
    long d = 5;                  // 4bytes (complier conditioned)
    long int e = 6;              // 8bytes
    float floating = 5.5f;       // 4bytes
    double var = 5.2;            // 8bytes
    bool decide = true;          //  1 byte

    std::cout << variable << std::endl;

    variable = 20;

    std::cout << variable << " " << sizeof(int) << std::endl;

    std::cout << variable2 << " " << sizeof(int) << std::endl;

    std::cout << a << car << " " << sizeof(char) << std::endl;

    std::cout << floating << " " << sizeof(float) << std::endl;

    std::cout << var << " " << sizeof(double) << std::endl;

    std::cout << decide << " " << sizeof(decide) << std::endl;

    std::cin.get();
}