#include "tree.h"
#include <vector>

void Tree::DataReed() {
	int n;  // count node
	std::cin >> n;
	for (int i = 0; i < n; i++) {
		int node_val;
		std::cin >> node_val;
		node_val = 5;
		node n_node(node_val, random());
		nodes.push_back(n_node);
	}
}
void Tree::BildTree() {
	node* node_pr_max = &nodes[0];
	for (int i = 0; i < nodes.size(); i++) {
		if (nodes[i].pr > node_pr_max->pr) {
			node_pr_max = &nodes[i];
		}
	}

}