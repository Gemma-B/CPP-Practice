#ifndef ROBOT_H_
#define ROBOT_H_

class RobotMove {
    public:
        int Drive(int position); 
        int MoveArmTo(int armPosition);
        int ScorePiece(bool hasPiece, int armPosition, int position, int point);
        bool PickUpPiece(bool hasPiece);
};
#endif
