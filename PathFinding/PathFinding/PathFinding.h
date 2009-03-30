#pragma once
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
	PathFind();
	~PathFind();
//-------------------------------	
	void OpenNodes(Node * _node); // Valid Adyacent Nodes.
	void CloseNode(Node * _node);  
//-------------------------------
	bool ExistOpenNodes();
	bool IsExitNode(Node *_node);
//-------------------------------
	int LessValueNode();
//-------------------------------
	list<Node*> GenerarCamino();

//-------------------------------------------------------------------------
private:
	list<Node*>m_pkPath;
	list<Node*>::iterator m_pkiPathIT;
	
	list<Node*>m_pkOpenNodes;
	list<Node*>::iterator m_pkOpenNodesIT;

	list<Node*>m_pkClosedNodes;
	list<Node*>::iterator m_pkClosedNodesIT;
//-------------------------------------------------------------------------
};
//-----------------