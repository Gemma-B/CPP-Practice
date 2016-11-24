#ifndef ROBOT_H_
#define ROBOT_H_

class RobotMove {
    public:
        void Drive(int distance, int position); 
        void MoveArmTo(int armPosition);
        int ScorePiece();
        int PickUpPiece();
};
#endif
