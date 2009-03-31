#pragma once
#define LARGO_MAPA	5*5
//-------------------------------------------------------------------------
#include "Node.h"
//-------------------------------------------------------------------------
#include <list>
using namespace std;
//-------------------------------------------------------------------------
class PathFind {
//-------------------------------------------------------------------------
public:
//-------------------------------
	PathFind(int * _map[],int _rows,int _cols);
	~PathFind();
//-------------------------------	
	void OpenNodes(Node * _node); // Valid Adyacent Nodes.
	void CloseNode(Node * _node);  
//-------------------------------
	bool ExistOpenNodes();
	bool IsExitNode(Node *_node);
	bool IsEndingNode(Node * _node);
//-------------------------------
	Node * LessValueNode();
//-------------------------------
	list<Node*> GenerarCamino();
//-------------------------------
	void CalculateMap(Node * _initialNode, Node * _endingNode);
//-------------------------------
//-------------------------------------------------------------------------
private:
	int m_Map[LARGO_MAPA];

	list<Node*>m_pkPath;
	list<Node*>::iterator m_pkiPathIT;
	
	list<Node*>m_pkOpenNodes;
	list<Node*>::iterator m_pkOpenNodesIT;

	list<Node*>m_pkClosedNodes;
	list<Node*>::iterator m_pkClosedNodesIT;
	
	Node * m_CurrentNode;
//-------------------------------------------------------------------------
};
//-----------------