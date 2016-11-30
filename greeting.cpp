#include <iostream>
int main() {
    std::cout << "What is your name?" << std::endl;
    std::string name;
    std::cin >> name;
    std::cout << "AHHH hello " << name << ". How old are you?" << std::endl;
    double age;
    std::cin >> age;
    if ( 7 >= age ) {
        std::cout << "I doubt you can even read, let alone type" << std::endl;
    }
    else if ( 7 < age && age <= 13) {
        std::cout << "have fun while you can" << std::endl;
    }
    else if ( 13 < age && age <= 20 ) {
        std::cout << "You're a teenager, cool" << std::endl;
    }
    else if ( 20 < age && age <= 35 ) {
        std::cout << " Hey, hows adult life treating you? How are taxes?" << std::endl;
    }
    else if ( 35 < age && age <= 60 ) {
        std::cout << " You still got time" << std::endl;
    }
    else if ( 60 < age && age <= 100 ) {
        std::cout << " the clock is ticking " << std::endl;
    }
    else if ( 100 < age && age <= 120) {
        std::cout << " really hanging on by a thread there friend. " << std::endl;
    }
    else {
        std::cout << " if you're human, then you're lying about your age" << std::endl;
    }
    return 0;
    }
