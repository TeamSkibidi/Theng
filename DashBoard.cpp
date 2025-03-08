#include "DashBoard.h"
#include <SFML/Graphics.hpp>
#include <iostream>
#include <string>
#include <vector>
#include <ctime>
#include <sstream>
#include "game.h"

using namespace std;
void DashBoard::initFont(sf::Font& font) {
	font.loadFromFile("C:\\Windows\\Fonts\\arial.ttf");
}
void DashBoard::initRectangle(int index, float x, float y, sf::Color color, float sizeWidth, float sizeHight)
{
	this->rec[index].setSize(sf::Vector2f(sizeWidth, sizeHight));
	this->rec[index].setFillColor(color);
	this->rec[index].setPosition(x, y);
}
void DashBoard::initText(int index, sf::Font font, string text, int size, float x, float y, sf::Color color)
{
	this->newText[index].setFont(font);
	this->newText[index].setString(text);
	this->newText[index].setCharacterSize(size);
	this->newText[index].setFillColor(color);
	this->newText[index].setPosition(x, y);
}

void DashBoard::initPng(int index, const string& path, float x, float y, sf::Color color, float sizeX, float sizeY)
{
	sf::Texture newPng;
	if (!newPng.loadFromFile(path)) {
		cout << "Error loading file png " << path << endl;
		return;
	}
	this->newSprite[index].setTexture(newPng);
	this->newSprite[index].setScale(sizeX, sizeY);
	this->newSprite[index].setPosition(x, y);
	this->newSprite[index].setColor(color);
}
void DashBoard::initAllRec()
{
	this->initRectangle(0, 280, 100, sf::Color(245, 149, 99), 100, 70);
	this->initRectangle(1, 395, 100, sf::Color(245, 149, 99), 145, 70);
	this->initRectangle(2, 425, 200, sf::Color(187, 173, 160), 40, 40);
	this->initRectangle(3, 475, 200, sf::Color(187, 173, 160), 40, 40);
	this->initRectangle(4, 145, 200, sf::Color(187, 173, 160), 40, 40);
	this->initRectangle(5, 100, 200, sf::Color(187, 173, 160), 40, 40);
}
void DashBoard::initAllimage()
{
	this->initPng(0, "Undo.png", 425, 200, sf::Color(187, 173, 160), 40, 40);
	this->initPng(1, "Redo.png", 475, 200, sf::Color(187, 173, 160), 40, 40);
	this->initPng(2, "Refresh.jpg", 145, 200, sf::Color(187, 173, 160), 40, 40);
	this->initPng(3, "Home.png", 100, 200, sf::Color(187, 173, 160), 40, 40);
	
}

void DashBoard::initAllText()
{
	this->initText(0, font, "2048", 70, 100, 90, sf::Color(187, 173, 160));
	this->initText(1, font, "Score", 25, 295, 110, sf::Color::White);
	this->initText(2, font, "Best Score", 25, 405, 110, sf::Color::White);
}

DashBoard::DashBoard(sf::RenderWindow* window)
{
	this->initAllimage();
	this->initAllRec();
	this->initAllText();
}

void DashBoard::presssEvent(sf::Event event)
{
}

void DashBoard::render()
{
	for (int i = 0; i < 6; i++) {
		if (i < 3) {
			this->window->draw(newText[i]);
		}
		if (i < 4){
			this->window->draw(newSprite[i]);
		}
		this->window->draw(rec[i]);
	}
}





