#include "MovementStrategy.h"
namespace corsim
{

class RegularMovementStrategy : public MovementStrategy
{
    public:
        RegularMovementStrategy();
        virtual void speed(int speed);
    private:

};

};