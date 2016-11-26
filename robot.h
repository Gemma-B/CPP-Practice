#ifndef ROBOT_H_
#define ROBOT_H_

class RobotMove {
    public:
        void Drive(int distance, int position); 
        void MoveArmTo(int armPosition);
        void ScorePiece(bool hasPiece, int armPosition, int position, int point);
        void PickUpPiece(bool hasPiece);
};
#endif
