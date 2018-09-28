#include "pch.h"
#include "ANDGATE.h"


void ANDGATE::calculate_output()
{
	if (this->get_in1()->get_value() == 1 && this->get_in2()->get_value() == 1)
	{
		this->get_out()->set_value(1);
	}
	else
		this->get_out()->set_value(0);
}