//#include "BST.h"
#ifndef _BST_H
#define _BST_H
#endif

void TreeInsert(BST& T, Node* z) {
	auto x = T.root;
	Node* y = nullptr;
	while (x != nullptr) {
		y = x;
		if (z -> key < x -> key) {
			x = x -> left;
		} else {
			x = x -> right;
		}
	}
	z -> parent = y;
	if (y == nullptr) {
		T.root = z;
	} else if ( z -> key < y -> key) {
		y -> left = z;
	} else {
		y -> right = z;
	}
}


