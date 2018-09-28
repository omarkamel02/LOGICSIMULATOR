#pragma once
#include<string>
using namespace std;


class NODE
{
	//the value on the node
	int value;
	//the name of the node ...used for searching for it also
	string name;
public:
	void set_name(string N);
	string get_name();
	void set_value(int V);
	int get_value();
	void print_node();
};
