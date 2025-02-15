#include "Character.hpp"
namespace ariel
{
    Character::Character() {}
    Character::Character(string name, Point location, int hitPoints, int ninjaOrCowboy) : name(name), location(location), hitPoints(hitPoints), ninjaOrCowboy(ninjaOrCowboy), assignedToTeam(false) {}

    bool Character::isAlive() const
    {
        return (this->hitPoints > 0);
    }

    double Character::distance(Character *other)
    {
        return this->location.distance(other->location);
    }

    string Character::getName() const
    {
        return this->name;
    }

    Point Character::getLocation() const
    {
        return this->location;
    }

    Point Character::setLocation(Point other)
    {
        this->location = other;
        return location;
    }

    int Character::getHitPoints() const
    {
        return this->hitPoints;
    }

    void Character::hit(int points)
    {        
        if (points > 0)
        {
            this->hitPoints -= points;
        }
        else
        {
            throw std::invalid_argument("Negative hit points is invalid");
        }
    }

    int Character::isNinjaOrCowboy()
    {
        return this->ninjaOrCowboy;
    }


    bool Character::isDead()
    {
        return !this->isAlive();
    }

    void Character::assignToTeam()
    {
        this->assignedToTeam = true;
    }

    bool Character::isAssignedToTeam()
    {
        return this->assignedToTeam;
    }

}