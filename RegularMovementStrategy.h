
#pragma once
#include "MovementStrategy.h"

namespace corsim
{

class RegularMovementStrategy : public MovementStrategy
{
    public:
        double setSpeed() override;
};

}