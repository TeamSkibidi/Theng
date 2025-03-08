#include "UIGame.h"
#include <iostream>


int main() {
	UIGame UIgame;
	std::srand(static_cast<unsigned>(time(nullptr)));


	while (UIgame.running()) {
		UIgame.update();
		UIgame.render();
	}
	return 0;
}
