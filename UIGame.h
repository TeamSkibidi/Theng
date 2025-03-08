#pragma once
#include <SFML/Graphics.hpp>c
#include "Dashboard.h"


class UIGame {
private:
	sf::RenderWindow* window;
	DashBoard* dashboard;
	sf::VideoMode* videomode;


	void initWindow();
	void initDashBoard();

public:
	UIGame();
	~UIGame();


	void pollEvent();
	void update();
	void render();
};

