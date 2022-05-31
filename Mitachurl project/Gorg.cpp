#include "Gorg.h"

Gorg::Gorg()
    :name("George"),  //initializer list
    health(30),
    shield(5),
    max_shield(5)
{
    //nothing here
}

std::string Gorg::GetName() const
{
    return name;
}

int Gorg::GetHealth() const
{
    return health;
}

int Gorg::GetShield() const
{
    return shield;
}

bool Gorg::IsDefeated() const
{
    return health <= 0;

}

void Gorg::getsAttacked()
{
    int roll = rand() % 100; // gives us a value from 0-99
    if (roll < 15) //0-14
    {
        if (++shield > max_shield) // if Gorg shield is at max and 1 is added, minus that 1 to prevent going over max
            --shield;
    }
    

    roll = rand() % 100; // gives us a value from 0-99
    if (roll < 65) //0-14
    {
        shield-= (1 + (rand() % 2));
        if (shield < 0)
        {
            health -= (5 + (rand() % 6));
        }
    }

}
// Two seperate, independent actions