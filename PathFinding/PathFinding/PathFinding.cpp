#include "PathFinding.h"
//--------------------------------------------------------------
PathFind::PathFind()
:
m_pkPath(NULL),
m_pkClosedNodes(NULL),
m_pkOpenNodes(NULL),
m_pkiPathIT(0),
m_pkOpenNodesIT(0),
m_pkClosedNodesIT(0)

{
	/***/
}
//--------------------------------------------------------------
PathFind::~PathFind(){
	/***/
}
//--------------------------------------------------------------
void PathFind::OpenNodes(Node * _node){
	/***/
}
//--------------------------------------------------------------
void PathFind::CloseNode(Node * _node){
	/***/
}
//--------------------------------------------------------------
bool PathFind::ExistOpenNodes(){
	/***/
	return false;
}
//--------------------------------------------------------------
bool PathFind::IsExitNode(Node *_node){
	/***/
	return false;
}
//--------------------------------------------------------------
int PathFind::LessValueNode(){
	/***/
	return 0;
}
//--------------------------------------------------------------
list<Node*> PathFind::GenerarCamino(){
	/***/
	return m_pkPath;
}
//--------------------------------------------------------------