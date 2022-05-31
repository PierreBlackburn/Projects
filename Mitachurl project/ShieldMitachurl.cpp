#include "ShieldMitachurl.h"

ShieldMitachurl::ShieldMitachurl(const std::string& NAME, int HEALTH, int SHIELD)
    :name(NAME),  //initializer list
    health(HEALTH),
    shield(SHIELD)
{
    //nothing here
}

std::string ShieldMitachurl::GetName() const
{
    return name;
}

int ShieldMitachurl::GetHealth() const
{
    return health;
}

int ShieldMitachurl::GetShield() const
{
    return shield;
}

bool ShieldMitachurl::IsDefeated() const
{
    return health <= 0;
      
}

void ShieldMitachurl::getsAttacked()
{
    // 1 in every 100 rounds the Mitachurl is one shot
    int roll = rand() % 100;
    if (roll == 0) 
    {
        health = 0;
    }
    else if (roll <= 50)    // 50% of the enemy attacks
    {
        shield -= (2 + (rand() % 4)); // shield = shield - rand number between 2 and 5
        if (shield < 0)
        {
            health += shield; // the shield has negative health, this is then added to the health
            shield = 0; // ensures next attack just damages health
        }

    }
    else if (roll <= 79) // 51 to 79 (29%) because if number lower than 51 occurs the prior statements are executed
    {
        health -= (4 + (rand() % 5)); // gives us a number in the 4 to 8 realm

    }
//20% of the time the attack misses (nothing is executed)
}
// 1% of the time the attack on the Mitachurl insta kills it
// 20% of the time the attack on the Mitachurl misses
// 50% of the time the attack on the Mitachurl takes 2 - 5 dmg to shield
// 29% of the time the attack on the Mitachurl does 4 - 8 random health dmg

