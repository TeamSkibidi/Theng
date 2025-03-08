#include <SFML/Graphics.hpp>
#include <iostream>
#include <string>
#include <vector>
#include <ctime>
#include <sstream>

using namespace std;

class Dashboard {
private:
	sf::RenderWindow* window;
	std::vector<std::vector<int>> boardGame;
	


	void init
	
public:
	Dashboard()


};
class UIPlay {
private:
	sf::RenderWindow* window;
	std::vector<std::vector<int>> boardGame;
	sf::Event event;
	Dashboard dashboard;



public:
	UIPlay();
	~UIPlay();


	void pollEvent();
	void update();
	void render();
};