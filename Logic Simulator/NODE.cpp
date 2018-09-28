#include "pch.h"
#include "NODE.h"
#include <string>
#include <iostream>
using namespace std;



void NODE::set_name(string N) {
	name = N;
}

string NODE:: get_name() {
	return name;
}
void NODE:: set_value(int V) {
	value = V;
}
int NODE::get_value() {
	return value;
}
void NODE:: print_node() {
	cout << get_name() << " " << get_value() << endl;
}
