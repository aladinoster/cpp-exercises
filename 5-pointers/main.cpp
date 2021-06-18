#include <iostream>

#define LOG(x) std::cout << x << std::endl

int main()
{
    //void *ptr = NULL; // Same as void* ptr=0;

    int var = 8;
    void *ptr = &var;
    int *ptr2 = &var;              // same as before
    double *ptr3 = (double *)&var; // casting int as double

    *ptr2 = 10; // this a way to access data in the pointer
    LOG(var);
    *ptr3 = 12;
    LOG(var);

    std::cin.get();
}
