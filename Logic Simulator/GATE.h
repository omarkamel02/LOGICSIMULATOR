#pragma once
#include "NODE.h"
//abstract class
class GATE
{
private:
	//every gate has two inputs and one output
	NODE* input1;
	NODE* input2;
	NODE* output;
public:
	//this function is to calculate the output node of the gate based on the two input nodes
	//it is virtual so based on every type of gate this function is implemented
	//every type of gate inherets from this class
	virtual void calculate_output() = 0;
	void set_in1(NODE* p);
	void set_in2(NODE* p);
	NODE* get_in1();
	NODE* get_in2();
	void set_out(NODE* p);
	NODE* get_out();
};
