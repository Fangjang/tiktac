#ifndef GAME_H
#define GAME_H

#include<iostream>

#include<SFML/Graphics.hpp>
#include<SFML/Audio.hpp>

//Game class
class Game {
private:

	//Initilization functions
	void initVariables();
	void initText();
	void initAudio();
	void initTextures();
	void initWindow();

	//Running Functions
	void pollEvents();
	void updateClicks();

	//Window Variables
	sf::RenderWindow* window;
	sf::VideoMode videoMode;
	sf::Event event;

	//Game objects
	enum class BLOCK_STATE {
		NONE = 0,
		CROSS,
		CIRCLE
	};
	struct Block {
		BLOCK_STATE blockState = BLOCK_STATE::NONE;
		bool clicked = false;
	};
		//Game State
		bool menuState;

	//Game Variables
		//Texts
	sf::Text text_Start;
	sf::Text text_Menu;
	sf::Text text_Credit;
	sf::Text text_Exit;
		//Audios
	sf::Sound click_Sound;
	sf::Sound gameOver_Sound;
	sf::SoundBuffer click_Buffer;
	sf::SoundBuffer gameOver_Buffer;
	

public:
	Game();
	~Game();

	bool getRunning() const;
	void render();
	void update();
};

#endif // !GAME

