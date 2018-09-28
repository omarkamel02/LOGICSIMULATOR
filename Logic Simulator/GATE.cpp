#include "pch.h"
#include "GATE.h"


void GATE:: set_in1(NODE* p)
{
	input1 = p;

}

void GATE::set_in2(NODE* p)
{
	input2 = p;

}

NODE* GATE:: get_in1()
{
	return input1;


}

NODE* GATE:: get_in2()
{
	return input2;


}

void GATE::set_out(NODE* p)
{
	output = p;
}

NODE* GATE:: get_out()
{
	return output;


}

