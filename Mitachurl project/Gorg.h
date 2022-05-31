#pragma once	//compiles this file once
#include <string>

class Gorg
{
public:
	Gorg();
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
	int max_shield;
};
