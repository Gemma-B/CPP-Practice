#include <iostream>
int main() {
    int choice;
    int drive = 1;
    int distance;
    int position = 0;
    std::cout << "what would you like to do player? Press 1 to drive, 2 to move arm, 3 to pick up piece, and 4 to score" << std::endl;
    std::cin >> choice;
        if (choice == drive) {
            std::cout << "where would you like to move to? choose position 0-7" << std::endl;
            std::cin >> distance;
            if (0 <= distance && distance <= 7){
                std::cout << "the robot is now in position" << distance << std::endl;
                position = distance;
            } else {
                std:: << "try again this time with a value of 0-7" << std::endl;
            };
        };
        if (choice != drive) {
            std::cout << "not finished yet" << std::endl;
        }
    return 0;
};
