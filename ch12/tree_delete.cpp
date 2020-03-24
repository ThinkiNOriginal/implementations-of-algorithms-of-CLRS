#ifndef _BST_H
#define _BST_H
#endif
#include "BST.h"

void Transplant(BST&, Node*, Node*);
Node* TreeMinimum(Node*);

void TreeDelete(BST& T, Node* z) {
	if (z -> left == nullptr) {
		Transplant(T, z, z -> right);
	} else if (z -> right == nullptr) {
		Transplant(T, z, z -> left);
	} else {
		auto y = TreeMinimum(z -> right);
		if (y -> parent != z) {
			Transplant(T, y, y -> right);
			y -> right = z -> right;
			y -> right -> parent = y;
		}
		Transplant(T, z, y);
		y -> left = z -> left;
		y -> left -> parent = y;
	}
}
