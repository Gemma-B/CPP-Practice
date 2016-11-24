#ifndef ROBOT_H_
#define ROBOT_H_

class RobotMove {
    public:
        void Drive(int Distance); 
        void MoveArmTo(int Position);
        int ScorePiece();
        int PickUpPiece();
};
#endif
