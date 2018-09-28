// Logic Simulator.cpp : This file contains the 'main' function. Program execution begins and ends there.
// simulator is the driving class it opens the simulation file then start creating nodes and gates and then printing the required output

#include "pch.h"
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include "NODE.h"
#include "GATE.h"
#include "simulator.h"
using namespace std;

int main(int argc, const char * argv[])
{

	simulator mysim;
	mysim.load(argv[1]);
	
	return 0;
}

