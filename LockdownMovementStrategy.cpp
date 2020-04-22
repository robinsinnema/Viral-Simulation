#include "LockdownMovementStrategy.h"

namespace corsim
{

LockdownMovementStrategy::LockdownMovementStrategy()
{
    this->speed(0);
}

void LockdownMovementStrategy::speed(int speed) {
    this->speed = speed;
}

}