#include "Newgame.h"




void NewGame::initFont(sf::Font& font)
{
	font.loadFromFile("Dosis-VariableFont_wght.ttf");

}

void NewGame::initAllImage()
{
	init.initPng(texture[0], sprite[1], "Square2", 100.0, 200.0, 1.0, 2.0, sf::Color::Black);
	init.initPng(texture[1], sprite[2], "Square2", 100.0, 240.0, 1.0, 2.0, sf::Color::Black);
	init.initPng(texture[2], sprite[3], "Square2", 100.0, 280.0, 1.0, 2.0, sf::Color::Black);
	init.initPng(texture[3], sprite[4], "Square2", 600.0, 800.0, 1.0, 1.0, sf::Color::Black);
	init.initPng(texture[4], sprite[0], "Square2", 10.0, 50.0, 1.0, 2.0, sf::Color::Black);
}

void NewGame::initAllText()
{
	init.initText(text[0], font, "Classic", 50, 100.0, 200.0, sf::Color::White);
	init.initText(text[1], font, "Standar", 50, 100.0, 240.0, sf::Color::White);
	init.initText(text[2], font, "Time Trial", 50, 100.0, 280.0, sf::Color::White);
}

void NewGame::pressdGame(sf::Event event)
{
	if (event.type == sf::Event::MouseButtonPressed) {
		sf::Vector2f mouPos = this->window->mapPixelToCoords(sf::Mouse::getPosition(*this->window));
		for (int i = 0; i < 5; i++) {
			sf::FloatRect bounds = sprite[i].getGlobalBounds();
			if (bounds.contains(mouPos))
				switch(i) {
				case 0:
					preWindow = curWindow;
					curWindow = gameState.MENU;
					break;
				case 1:
					preWindow = curWindow;
					curWindow = gameState.CLASSIC;
					break; 
				case 2:
					preWindow = curWindow;
					curWindow = gameState.STANDAR;
					break; 
				case 3:
					preWindow = curWindow;
					curWindow = gameState.TIMETRIAL;
					break; 
				case 4:
					preWindow = curWindow;
					curWindow = gameState.SETTING;
					break;
				}
		}
	}
}

NewGame::NewGame(sf::RenderWindow* window, const string& cur, const string& pre)
	: curWindow(cur), preWindow(pre)
{
	initFont(this->font);
	initAllText();
	initAllImage();
}

void NewGame::updateEvent()
{
	pressdGame(event);
}

void NewGame::render()
{
	for (int i = 0; i < 5; i++) {
		window->draw(sprite[i]);
		if (i < 3) {
			window->draw(text[i]);
		}
	}
}
