#include <iostream>
#include "robot.h"
    int RobotMove::Drive(int position) {
            if ( 0<= position && 7>= position) {
                std::cout << "The robot is now in position " << position << std::endl;
            }
            else {
                std::cout << "Try again, this time with a position of 0-7 :P" << std::endl;
                std::cin >> position;
                if ( 0<= position & 7>= position ) {
                    std::cout << "thanks for doing it right!" << std::endl;
                    std::cout << "the robot is now in position " << position << std::endl;
            }
                else {
                std::cout << "boi you know what you're supposed to do, and you still mess it up"  << std::endl;
                }
                }
            return position; 
            }
    int RobotMove::MoveArmTo(int armPosition){
            if ( 0<= armPosition && 10>= armPosition) {
                std::cout << "the arm is now in position " << armPosition << std::endl;
            }
            else { 
                std::cout << "try again with a position between 0 and 10" << std::endl;
         
                std::cin >> armPosition;
                if ( 0<= armPosition && 10>= armPosition ) {
                    std::cout << "great job! the arm is now in position " << armPosition << std::endl;
                }
                else {
                    std::cout << "man you still messed it up?!? " << std::endl;
                }
            }
            return armPosition;
        }
    int RobotMove::ScorePiece(bool hasPiece, int armPosition, int position, int point){
            /*if ( armPosition == 10 && position == 6 && hasPiece == true){
                point += 1;
                hasPiece == false; 
            }
            else {
                std::cout << "Sorry, but to able to score you need to have a piece, have your arm in position 10, and be in position 6 on the field." << std::endl;
                std::cout << "Currently your arm is in position " << armPosition << " and your bot is in position " << position << std::endl;
            }*/
        if ( armPosition == 10 && position == 6){
            if ( hasPiece == true ){
                std::cout << "You got a point!" << std::endl;
                point += 1;
                std::cout << "Your new score is " << point << std::endl;
            }
            else {
                std::cout << "you need a piece" << std::endl;
            }
        hasPiece = false;
        }
        else {
            std::cout << "arm position needs to be @ 10. Its @ "<< armPosition << std::endl;
            std::cout << "position needs to be @ 6. Its @ " << position << std::endl;
        }
            return point;
        }
        bool RobotMove::PickUpPiece(bool hasPiece){
            if (hasPiece == false){
                std::cout << "Hey you picked up a piece!" << std::endl;
            }
            else {
                std::cout << "you already have a piece" << std::endl;
            }
            return hasPiece;
        }
