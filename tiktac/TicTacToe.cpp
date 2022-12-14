#include"Game.h"

int main()
{
	Game tictac;
	while (tictac.getRunning())
	{
		tictac.update();

		tictac.render();
	}

	std::cout << "Closed SuccessfUl" << std::endl;
	std::cin.get();
	return 0;
}