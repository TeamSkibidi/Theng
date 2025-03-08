#pragma once


#include <SFML/Graphics.hpp>


class DashBoard;
class GridGame;


class UIGame {
private:
	sf::RenderWindow* window;
	DashBoard* dashboard;
	sf::VideoMode videomode;
	sf::Event event;
	sf::View view;
	GridGame* grid;
	sf::Clock clock;
	double starting = 0.0001;

	void checkFPS();
	void initWindow();
	void initDashBoard();
	void initGrid();

public:
	UIGame();
	~UIGame();


	const bool running() const;


	void pollevent();
	void update();
	void render();
};

