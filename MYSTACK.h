#pragma once
#include <vector>

using namespace std;
class Node{
public:
	vector<vector<int>> data;
	Node* pNext;

	Node(vector<vector<int>> value) {
		data = value;
		pNext = nullptr;
	}
};

class MYSTACK
{
private: 
	Node* topNode;
	int count;
public: 
	MYSTACK();
	~MYSTACK();

	void push(vector<vector<int>> value);
	void pop();
	vector<vector<int>> top();
	bool isEmpty();
	int size();
};