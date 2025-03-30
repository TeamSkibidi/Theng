#include "StateManagement.h"


vector<vector<int>> STATEMANGER::undo(MYSTACK game)
{
	vector<vector<int>> temp;
	temp = game.top();
	return temp;

}

vector<vector<int>> STATEMANGER::redo(MYSTACK game)
{
	vector<vector<int>> temp;
	temp = game.top();
	return temp;
}
