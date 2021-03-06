// Corona Simulation - basic simulation of a human transmissable virus
// Copyright (C) 2020  wbrinksma

// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.

// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <http://www.gnu.org/licenses/>.

#include "subject.h"
#include <math.h>

namespace corsim
{

Subject::Subject(int x, int y, int radius, bool infected)
{
    this->_x = x;
    this->_y = y;
    this->_radius = radius;
    this->_infected = infected;
}

double Subject::x()
{
    return this->_x;
}

double Subject::y()
{
    return this->_y;
}

void Subject::set_x(double x)
{
    this->_x = x;
}

void Subject::set_y(double y)
{
    this->_y = y;
}

double Subject::dx()
{
    return this->_dx;
}

double Subject::dy()
{
    return this->_dy;
}

void Subject::set_dx(double dx)
{
    this->_dx = dx;
}

void Subject::set_dy(double dy)
{
    this->_dy = dy;
}

int Subject::radius()
{
    return this->_radius;
}

bool Subject::infected()
{
    return this->_infected;
}

void Subject::infect()
{
    this->_infected = true;
}

double Subject::angle()
{
    return atan2(_dy,_dx);
}

double Subject::speed()
{
    return sqrt(_dx * _dx + _dy * _dy);
}

void Subject::selectStrategy(MovementStrategy *strategy){
    delete this->strategy_;
    this->strategy_ = strategy;
}

void Subject::setBeenInfected()
{
    this->_hasBeenInfected = true;
}

bool Subject::hasBeenInfected()
{
    return _hasBeenInfected;
}

int Subject::daysInfected()
{
    return _daysInfected;
}

void Subject::addDayInfected()
{
    this->_daysInfected++;
}

int Subject::daysImmune()
{
    return _daysImmune;
}

void Subject::addDayImmune()
{
    this->_daysImmune++;
}

void Subject::notImmune()
{
    this->_isImmune = false;
}

void Subject::cure()
{
    this->_infected = false;
    this->_isImmune = true;
    this->_daysInfected = 0;
    this->_daysImmune = 0;
}

bool Subject::isImmune()
{
    return this->_isImmune;
}

}