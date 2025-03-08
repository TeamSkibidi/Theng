#include <SFML/Graphics.hpp>
#include <iostream>
#include <string>
#include <vector>
#include <ctime>
#include <sstream>
#include "UIGame.h"
#include "DashBoard.h"


void UIGame::initWindow() {
	this->videomode = 
	this->window = new sf::RenderWindow(sf::VideoMode(600, 800));
	
}
UIGame::UIGame() {
	this->initDashBoard();

}
void UIGame::initDashBoard()
{
	this->dashboard = new DashBoard(this->window);

}