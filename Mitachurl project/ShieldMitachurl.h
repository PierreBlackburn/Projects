#pragma once	//compiles this file once
#include <string>

class ShieldMitachurl
{
public:
	ShieldMitachurl(const std::string & NAME, int HEALTH, int SHIELD);
	// passing by reference so c++ doesnt make a copy of the string

	std::string GetName() const;
	int GetHealth() const;
	int GetShield() const;

	bool IsDefeated() const;
	void getsAttacked();

private:
	std::string name;
	int health;
	int shield;
};

