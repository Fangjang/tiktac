#include"Game.h"

void Game::initVariables() {

}

void Game::initWindow() {
	videoMode.height = 500;
	videoMode.width = 800;
	window = new sf::RenderWindow(videoMode, "TicTacToe", sf::Style::Titlebar | sf::Style::Close);
	window->setFramerateLimit(60);
}

void Game::initTextures() {

}

void Game::initText() {

}

void Game::initAudio() {

}

void Game::pollEvents() {
	while (window->pollEvent(event))
	{
		switch (event.type)
		{
		case sf::Event::Closed:
			window->close();
		}
	}
}

void Game::updateClicks() {

}

Game::Game() {
	initVariables();
	initTextures();
	initText();
	initAudio();
	initWindow();
}

Game::~Game() {
	delete window;
}

bool Game::getRunning() const {
	return window->isOpen();
}

void Game::update() {
	pollEvents();
}

void Game::render() {
	window->clear(sf::Color::Black);
	window->display();
}