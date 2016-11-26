#include <iostream>
#include "robot.h"
int main() {
    int choice;
    int distance;
    int drive = 1;
    int moveArm = 2;
    int pickPiece = 3;
    int score = 4;
    int armPosition = 0;
    int position = 0;
    int point = 0;
    bool hasPiece = false;
    int play;
    int yes = 1;
    int no = 2;
    std::cout << "Wanna play? press 1 for yes and 2 for no." << std::endl;
    std::cin >> play;
    while (play == 1) {
    std::cout << "Choose: 1 to drive, 2 to move arm, 3 to pick up piece, and 4 to score" << std::endl;
    std::cin >> choice;
        if ( choice == drive ) {
            RobotMove rd; // You need to call RobotMove and give it a name ("rm" in this case")
            rd.Drive(distance, position); // Now the function can be called (using a . instead of double ::)
        }
        else if ( choice == moveArm ) {
            RobotMove ma;
            ma.MoveArmTo(armPosition);
        } 
        else if (choice == pickPiece) {
            RobotMove pp;
            pp.PickUpPiece(hasPiece);
        }
        else if (choice == score) {
            RobotMove sp;
            sp.ScorePiece(hasPiece, armPosition, position, point);
        }
        else {
            std::cout << "you know you need to choose a number between 1-4" << std::endl;
        }
        std::cout << "Still playing? 1 for yes, 2 for no" << std::endl;
        std::cin >> play;
        }
    std::cout << "thanks for playing! Your final score was " << point << std::endl;
    return 0;
}
