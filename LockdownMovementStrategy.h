#include "MovementStrategy.h"
namespace corsim
{

class LockdownMovementStrategy : public MovementStrategy
{
    public:
        LockdownMovementStrategy();
        virtual void speed(int speed);
    private:

};

};