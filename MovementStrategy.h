#pragma once 

namespace corsim
{

class MovementStrategy
{
    public:
        MovementStrategy() = default;
        virtual ~MovementStrategy() = default;
        virtual double setSpeed() = 0;
};

}