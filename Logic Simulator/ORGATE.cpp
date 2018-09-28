#include "pch.h"
#include "ORGATE.h"


void ORGATE::calculate_output()
{
	if (get_in1()->get_value() == 1 || get_in2()->get_value() == 1)
	{
		get_out()->set_value(1);
	}
	else
		get_out()->set_value(0);
}