#include "PathFinding.h"
//--------------------------------------------------------------
PathFind::PathFind(int * _map[],int _rows,int _cols)
:
m_pkPath(NULL),
m_pkClosedNodes(NULL),
m_pkOpenNodes(NULL),
m_CurrentNode(NULL),
m_pkiPathIT(0),
m_pkOpenNodesIT(0),
m_pkClosedNodesIT(0)

{
	// Copiamos el mapa pasado a un mapa fijo.
	for (int i = 0; i > LARGO_MAPA; i++){
		m_Map[i] = (int)_map[i];
	}
	
	/***/
}
//--------------------------------------------------------------
PathFind::~PathFind(){
	/***/
}
//--------------------------------------------------------------
void PathFind::OpenNodes(Node * _node){

	// m_pkOpenNodes.insert(_node); // Insertar nodo en la lista
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
Node * PathFind::LessValueNode(){
	/***/
	return m_CurrentNode;
}
//--------------------------------------------------------------
list<Node*> PathFind::GenerarCamino(){
	/***/
	return m_pkPath;
}
//--------------------------------------------------------------
bool PathFind::IsEndingNode(Node * _node){
	return false;
}
//--------------------------------------------------------------
void PathFind::CalculateMap(Node * _initialNode, Node * _endingNode){
	// Copiamos Posicion X,Y de nodos inicial y destino.
	//m_InitialPosition.Initial_X = _initial.Initial_X;
	//m_InitialPosition.Initial_Y = _initial.Initial_Y;
	//m_EndingPosition.Ending_X = _ending.Ending_X;
	//m_EndingPosition.Ending_Y = _ending.Ending_Y;

	OpenNodes(_initialNode);

	while (ExistOpenNodes()){
		m_CurrentNode = LessValueNode();

		if (IsEndingNode(m_CurrentNode)){
			//GenerarCamino();
		}
		else {
			CloseNode(m_CurrentNode);
			OpenNodes(m_CurrentNode);
		}
	}



}
//--------------------------------------------------------------