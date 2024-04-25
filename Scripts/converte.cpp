#include <iostream>
#include <iomanip>

int main() {
    double d = 50.0000055;
    float f = 50.0025585f;

    std::cout << std::fixed << std::setprecision(5);
    std::cout << "Double: " << d << std::endl;
    std::cout << "Float: " << f << std::endl;

    return 0;
}