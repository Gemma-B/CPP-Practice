#include <iostream>
#include <vector>
#include <algorithm>
#include <typeinfo>
#include <iterator>
int main() {
    int number = 1;
    std::string endCode = "stop";
    std::vector<double> inputtedNumbers;
    while ( typeid(number) == typeid(int)) {
        std::cout << " Input numbers! Enter 69 to stop the inputs " << std::endl;
        std::cin >> number;
        if ( number == 69 ) {
            break;
        }
        inputtedNumbers.push_back(number);
    }
    std::sort(std::begin(inputtedNumbers), std::end(inputtedNumbers));
    std::cout << " Hey you did it! Here are your numbers sorted!!!!:" << std::endl;
    for ( int i : inputtedNumbers ) {
    std::cout << i << ", " ;
    std::cout << std::endl;
    }
    return 0;
}
