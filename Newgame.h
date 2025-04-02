#pragma once
#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include <SFML/Window.hpp>
#include <SFML/Audio.hpp>

#include "Init.h"
#include "GameState.h"

#include <string>

using namespace std;
class NewGame {
private:
	sf::RenderWindow* window;
	Init init;
	GAMESTATE gameState;
	string curWindow;
	string preWindow;

	sf::Event event;
	sf::Texture texture[5];
	sf::Sprite sprite[5];
	sf::Text text[3];
	sf::Font font;

	void initFont(sf::Font& font);
	void initAllImage();
	void initAllText();
	void pressdGame(sf::Event event);
public:
	NewGame(sf::RenderWindow* window, const string& cur, const string& pre);

	void updateEvent();
	void render();
};