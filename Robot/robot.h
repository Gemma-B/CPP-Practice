#ifndef ROBOT_H_
#define ROBOT_H_
namespace robotGame {
class RobotMove {
    public:
        int Drive(int position); 
        int MoveArmTo(int armPosition);
        int ScorePiece(bool hasPiece, int armPosition, int position, int point);
        bool PickUpPiece(bool hasPiece, int armPosition);
};
}
#endif
