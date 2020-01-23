#include <iostream>
 
// Pure C/C++ function 'add'
double add(double a, double b)
{
    return a + b;
}
 
int main(int argc, char* argv[])
{
    double a, b, c;
 
    if (argc >= 3) {
        a = std::stod(argv[1]);
        b = std::stod(argv[2]);
        c = add(a, b);
 
        std::cout << c << std::endl;
    }
 
    return 0;
}
