#include "pch.h"
#include "NANDGATE.h"


void NANDGATE::calculate_output()
{
	if (this->get_in1()->get_value() == 1 && this->get_in2()->get_value() == 1)
	{
		this->get_out()->set_value(0);
	}
	else
		this->get_out()->set_value(1);
}