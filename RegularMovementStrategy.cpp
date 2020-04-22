#include "RegularMovementStrategy.h"

namespace corsim
{

RegularMovementStrategy::RegularMovementStrategy()
{
    this->speed(10);
}

void RegularMovementStrategy::speed(int speed){
    this->speed = speed;
}



}