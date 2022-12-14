#include"Game.h"

int main()
{
	Game tictac;
	while (tictac.getRunning())
	{
		tictac.update();

		tictac.render();
	}

	for (int i = 0; i < 5; i++)
	{
		std::cout << "COndo kha" << std::endl;
	}

	std::cout << "Closed SuccessfUl" << std::endl;
	std::cin.get();
	return 0;
}