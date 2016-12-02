#include <iostream>
#include "robot.h"
int main() {
    int choice;
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
            std::cout << "where do you want your robot to move? choose a position of 0-7" << std::endl;
            std::cin >> position;
            robotGame::RobotMove rd;
            rd.Drive(position) ;
        }
        else if ( choice == moveArm ) {
            std::cout << "what position is the arm gonna be in? choose 0-10" << std::endl;
            std::cin >> armPosition;
            robotGame::RobotMove ma;
            ma.MoveArmTo(armPosition);
        } 
        else if (choice == pickPiece) {
            robotGame::RobotMove pp;
            pp.PickUpPiece(hasPiece, armPosition);
            if ( hasPiece == false && armPosition == 0){
                hasPiece = true;
            }
        }
        else if (choice == score) {
            robotGame::RobotMove sp;
            sp.ScorePiece(hasPiece, armPosition, position, point);
            if (armPosition == 10 && position == 6) {
                if ( hasPiece == true) {
                point += 1;
                hasPiece = false;
                }
            }
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
