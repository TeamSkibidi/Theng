#pragma once
#include "MYSTACK.h"
#include <vector>

using namespace std;
class STATEMANGER {
private:
	int saveCount;
	bool isRedo;
	vector<vector<int>> BoardGame;
	MYSTACK save;
public: 

	vector<vector<int>> undo(MYSTACK game);
	vector<vector<int>> redo(MYSTACK game);
	std::vector<std::vector<int>>& getBoardGame() {
		return BoardGame;
	}
};