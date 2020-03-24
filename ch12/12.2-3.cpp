#include "BST.h"

Node* TreeMaximum(Node*);

Node* TreePredecessor(Node* x) {
	if (x -> left != nullptr) {
		return TreeMaximum(x -> left);
	}
	auto par = x -> parent;
	while (par != nullptr and x == par -> left) {
		x = par;
		par = par -> parent;
	}
	return par;
}
