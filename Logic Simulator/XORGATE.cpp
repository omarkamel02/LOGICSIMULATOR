#include "pch.h"
#include "XORGATE.h"


void XORGATE::calculate_output()
{
	if (this->get_in1()->get_value() == this->get_in2()->get_value())
	{
		this->get_out()->set_value(0);
	}
	else
		this->get_out()->set_value(1);
}