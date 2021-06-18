#include <iostream>

#define LOG(x) std::cout << x << std::endl

int main()
{
    //void *ptr = NULL; // Same as void* ptr=0;

    int var = 8;
    void *ptr = &var;
    int *ptr2 = &var;              // same as before
    double *ptr3 = (double *)&var; // casting int as double

    std::cin.get();
}
