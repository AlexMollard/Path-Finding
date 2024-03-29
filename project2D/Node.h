#pragma once
#include "Vector2.h"

#define NEIGHBOUR_COUNT 8

struct Node
{
	Node(Vector2 Pos, int IndexX, int IndexY);
	~Node();

	Vector2 _Position;
	int _IndexX;
	int _IndexY;

	Node* _Prev;
	
	int _GScore;
	int _FScore;
	int _HScore;

	Node* _Neighbours[NEIGHBOUR_COUNT]; 
	int _Costs[NEIGHBOUR_COUNT]; 
 	bool _Blocked; 
};