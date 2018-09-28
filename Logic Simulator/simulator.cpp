#include "pch.h"
#include "simulator.h"
#include <fstream>




/*simulator::~simulator()
{
}
*/

int simulator:: nodes_number()
{
	return nodes.size();
}

int simulator::gates_number()
{
	return  gates.size();
}

NODE* simulator:: find_node(string N)
{
	for (int i = 0; i < nodes.size(); i++)
	{
		if (nodes[i]->get_name() == N)
			return nodes[i];
	}

	return NULL;
}
NODE* simulator::add_node(string N) {
	nodes.push_back(new NODE());
	nodes.back()->set_name(N);
	return nodes.back();
}

NODE* simulator::find_or_add(string N)
{
	NODE* temp = find_node(N);
	if (temp == NULL)
		return add_node(N);
	else
		return temp;
}

GATE* simulator::add_gate(string type) {
	if (type == "AND")

		gates.push_back(new ANDGATE());

	else if (type == "OR")
		gates.push_back(new ORGATE());

	else if (type == "NAND")
		gates.push_back(new NANDGATE());
	else if (type == "XOR")
		gates.push_back(new XORGATE());
	else if (type == "NOR")
		gates.push_back(new NORGATE());
	return gates.back();
}
void simulator::simulate()
{
	for (int i = 0; i < gates.size(); i++)
	{
		gates[i]->calculate_output();
	}
}

void simulator::print_all_nodes()
{
	for (int i = 0; i < nodes.size(); i++)
	{
		nodes[i]->print_node();
	}
}

void simulator:: load(const char* filename)
{
	ifstream f1;
	string temp;
	GATE* gate;
	string node1;
	string node2;
	string node3;
	int v;
	f1.open(filename);

	if (f1.is_open())
	{
		while (!f1.eof())
		{

			f1 >> temp;



			if (temp == "set")
			{
				f1 >> temp >> v;
				find_or_add(temp)->set_value(v);
			}

			else if (temp == "sim")
				simulate();
			else if (temp == "output")
			{
				f1 >> temp;
				if (temp == "all")
				{
					print_all_nodes();
				}

				else
				{
					find_node(temp)->print_node();
				}
			}

			else if (temp == "X")
				simulate();

			else
			{
				gate = add_gate(temp);
				f1 >> node1 >> node2 >> node3;
				gate->set_in1(find_or_add(node1));
				gate->set_in2(find_or_add(node2));
				gate->set_out(find_or_add(node3));



			}




		}


	}





	f1.close();
}
