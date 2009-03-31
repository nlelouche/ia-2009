#pragma once
//-------------------------------------------------------------------------
#include <list>
using namespace std;
//-------------------------------------------------------------------------
class Node{
//-------------------------------------------------------------------------
public:
//-------------------------------
	Node(int _cost,int _x, int _y);
	~Node();
//-------------------------------
	Node* GetParent();
	void SetParent(Node * _node);
//-------------------------------
	int GetTotalCost();
	void SetTotalCost(int _parentCost);
//-------------------------------------------------------------------------
private:
	Node * m_pkParent;

	
	bool m_bIsOpen;
	bool m_bIsClosed;

	int m_Cost;
	int m_TotalCost;

	int m_x;
	int m_y;

public:
	struct NodePosition{
		int Initial_X;
		int Initial_Y;
		int Ending_X;
		int Ending_Y;
	};
//-------------------------------------------------------------------------
};
//-------------------------------------------------------------------------