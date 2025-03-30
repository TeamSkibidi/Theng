#include "MYSTACK.h"
#include <iostream>

MYSTACK::MYSTACK()
{
	topNode = nullptr;
	count = 0;
}

MYSTACK::~MYSTACK()
{
	while (!isEmpty()) {
		pop();
	}
}

void MYSTACK::push(vector<vector<int>> value)
{
	Node* newNode = new Node(value);
	newNode->pNext = topNode;
	topNode = newNode;
	count++;
}

void MYSTACK::pop()
{
	if (!isEmpty()) {
		Node* curNode = topNode;
		topNode = topNode->pNext;
		delete curNode;
		count--;
	}
	else {
		std::cout << " rong ";
	}
}

vector<vector<int>> MYSTACK::top()
{
	if (!isEmpty()) {
		return topNode->data;
	}
	return { };
}

bool MYSTACK::isEmpty()
{
	return topNode == nullptr;
}

int MYSTACK::size()
{
	return count;
}

