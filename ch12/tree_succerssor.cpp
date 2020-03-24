#include "BST.h"

Node* TreeMinmum(Node*);

Node* TreeSuccessor(Node* x) {
	if (x -> right != nullptr) {
		return TreeMinmum(x -> right);
	}
	auto par = x -> parent;
	while (par != nullptr and x == par -> right) {
		x = par;
		par = par -> parent;
	}
	return par;
}
