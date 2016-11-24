#include <iostream>
#include "robot.h"
int main() {
    return 0;
};
        void RobotMove::Drive(int distance, int position) {
            std::cout << "where do you want your robot to move to? choose a position of 0-7" << std::endl;
            std::cin >> distance;
            if ( 0<= distance && 7>= distance) {
                std::cout << "The robot is now in position " << distance << std::endl;
                position = distance;
            }
            else {
                std::cout << "Try again, this time with a position of 0-7 :P" << std::endl;
        }
        }
        void RobotMove::MoveArmTo(int position){
        }
        int RobotMove::ScorePiece(){
        }
        int RobotMove::PickUpPiece(){
        }
