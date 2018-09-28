#pragma once
#include<string>
using namespace std;


class NODE
{
	int value;
	string name;
public:
	void set_name(string N);
	string get_name();
	void set_value(int V);
	int get_value();
	void print_node();
};
