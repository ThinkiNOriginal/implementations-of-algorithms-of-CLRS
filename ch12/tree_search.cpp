#include "BST.h"

Node* TreeSearch(Node* x, int key) {
	if (x == nullptr or key == x -> key) {
		return x;
	}
	if (key < x -> key) {
		return TreeSearch(x -> left, key);
	} else {
		return TreeSearch(x -> right, key);
	}
}

Node* IterativeTreeSearch(Node* x, int key) {
	if (x != nullptr and key != x -> key) {
		if (key < x -> key) {
			x = x -> left;
		} else {
			x = x -> right;
		}
	}
	return x;
}
