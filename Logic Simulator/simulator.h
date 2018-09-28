#pragma once
#include "GATE.h"
#include "NODE.h"
#include <vector>
#include <string>
#include "ANDGATE.h"
#include "ORGATE.h"
#include "NORGATE.h"
#include "XORGATE.h"
#include "NANDGATE.h"
#include "NORGATE.h"


class simulator
{
public:
	
	//array of all the nodes in the simulation
	vector<NODE*> nodes;
	//array of all the gates in the simulation
	vector<GATE*> gates;
	//opens the simulation file and parse it 
	void load(const char* filename);
	// the number of gates and nodes in the simulation
	int gates_number();
	int nodes_number();
	//when the simulation file sets a new node the simulation object starts searching for this node 
	NODE* find_node(string N);
	// if the node reuquired isn't in the simulation it creates it
	NODE* add_node(string N);
	//searching for the node if it doeasn't exist we creat it
	NODE* find_or_add(string N);

	//adding gate depending in it's type mentioned in the file
	GATE* add_gate(string type);
	//this function is called after there is 'X' in the file meanning that the circuit is built and every input is set 
	//be looping through every gate in gates array and calculating it's output
	void simulate();
	void print_all_nodes();
	
	
	
};



	

	

	

	

	

	

	
	







