#pragma once
#include "NODE.h"
class GATE
{
private:
	NODE* input1;
	NODE* input2;
	NODE* output;
public:

	virtual void calculate_output() = 0;
	void set_in1(NODE* p);
	void set_in2(NODE* p);
	NODE* get_in1();
	NODE* get_in2();
	void set_out(NODE* p);
	NODE* get_out();
};
