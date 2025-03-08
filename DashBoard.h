#pragma once
#include <SFML/Graphics.hpp>
#include <iostream>
#include <vector>
#include <ctime>
#include <sstream>
#include <string>

using namespace std;

class DashBoard {
private:
	sf::RenderWindow* window;
	sf::Text newText;
	string fileImage;
	sf::RectangleShape rec[6];
	sf::Text newText[3];
	sf::Font font;
	sf::Sprite newSprite[4];



	void initFont(sf::Font &font);
	void initRectangle(int index, float x, float y, sf::Color color, float sizeWidth, float sizeHight);
	void initText(int index, sf::Font font, string text, int size, float x, float y, sf::Color color);
	void initPng(int index, const string& path, float x, float y, sf::Color color, float sizeX, float sizeY);
	void initAllRec();
	void initAllimage();
	void initAllText();
public:
	DashBoard(sf::RenderWindow* window);

	void presssEvent(sf::Event event);
	void render();
	


};