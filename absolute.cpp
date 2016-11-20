#include <iostream> 
#include <cmath>

int main() {
    std::cout << "ENTER YOUR NUMBER" << std::endl;
    double absoluteNumber;
    std::cin >> absoluteNumber;
    if (absoluteNumber == 0) {
        std::cout << "The absolute value of 0 is 0 " << std::endl;
    }
    else {
        absoluteNumber = pow(pow(absoluteNumber, 2), 0.5);
        std::cout << "The absolute value is " << absoluteNumber << std::endl;
    }
    return 0;
}
