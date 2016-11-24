#include <iostream>
#include "robot.h"
int main() {
    return 0;
}
int runProgram() {
    int choice;
    int distance;
    int drive = 1;
    int moveArm = 2;
    int pickPiece = 3;
    int score = 4;
    int armPosition = 0;
    int position = 0;
    std::cout << "Please choose: Press 1 to drive, 2 to move arm, 3 to pick up piece, and 4 to score" << std::endl;
    std::cin >> choice;
        if ( choice == drive ) {
            std::cout << "RobotMove::Drive" << std::endl;
            //RobotMove::Drive(distance, position)
        }
        if ( choice == moveArm ) {
            std::cout << "what position would you like the arm to be in? choose 0-10" << std::endl;
            std::cin >> armPosition;
            if ( 0<= armPosition && 10>= armPosition) {
                std::cout << "the arm is now in position " << armPosition << std::endl;
            }
            else {
                std::cout << "try again with a position between 0 and 10" << std::endl;
            }
        } 
        if (choice == pickPiece) {
            std::cout << "not done yet" << std::endl;
        }
        if (choice == score) {
            std::cout << "not done yet" << std::endl;
        }
        if (1 > choice && choice > 4) {
            std::cout << "you need to choose a number between 1-4" << std::endl;
        }
    return 0;
}
