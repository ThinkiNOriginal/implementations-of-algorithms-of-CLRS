#include "BST.h"

Node* TreeMinimum(Node* x) {
	while (x -> left != nullptr) {
		x = x -> left;
	}
	return x;
}

Node* TreeMaximum(Node* x) {
	while (x -> right != nullptr) {
		x = x -> right;
	}
	return x;
}
