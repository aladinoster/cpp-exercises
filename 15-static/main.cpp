#include <iostream>

struct Entity
{
    static int X, Y;

    void Print()
    {
        std::cout << X << " , " << Y << std::endl;
    }
};

int Entity::X; // Single instance of this variable across all instances of the struct variables
int Entity::Y; // Like if all instances of Entity point towards the same memory address X,Y

int main()
{
    Entity e1;
    e1.X = 2;
    e1.Y = 3;

    // Entity e2 = {5, 8};  Alternative initializer

    e1.Print();

    Entity e2;
    e2.X = 5;
    e2.Y = 8;

    e1.Print();
    e2.Print();

    std::cin.get();
}