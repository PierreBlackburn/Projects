#include <iostream>
#include <ctime>
#include "ShieldMitachurl.h"
#include "Gorg.h"




int main()
{
	//Different randomness every time the program is executed
	srand(static_cast<unsigned>(time(0)));

	//Get Health
	std::cout << "Enter Mitachurl health value: ";
	int health;
	std:: cin >> health;

	//Get shield
	std::cout << "Enter Mitachurl shield value: ";
	int shield;
	std::cin >> shield;

	//the amount of simulations run
	const int Number_of_Simulations = 10000000;

	//total number of rounds survived
	int MitachurlWins = 0;
	int GorgWins = 0;
	

	// repeats until i = Number of simulations or Mitachurl is dead
	for (int i = 1; i <= Number_of_Simulations; ++i) 
	{
		ShieldMitachurl oh("Oh", health, shield);
		Gorg george;
		


		//while still healthy enough to do battle
		while ((oh.IsDefeated() == false) && (george.IsDefeated() == false))
		{
			george.getsAttacked();
			if (george.IsDefeated() == false)
			{
				oh.getsAttacked();
			}
		}

		if (george.IsDefeated() == true)
		{
			++MitachurlWins;
		}
		else
		{
			++GorgWins;
		}
	}

	double Mitachurl_pct = MitachurlWins / static_cast <double>(Number_of_Simulations) * 100;
	double Gorg_pct = GorgWins / static_cast <double>(Number_of_Simulations) * 100;



		//Gather and report findings
	std::cout << "Mitachurl: " << Mitachurl_pct << std:: endl;
	std::cout << "Gorg: " << Gorg_pct << std:: endl;

	


	//clean up and exit program
	system, ("PAUSE");
	return 0;
}


