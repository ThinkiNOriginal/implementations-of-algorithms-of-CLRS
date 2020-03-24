#include "rad_black_tree.h"

void LeftRotate(RBT& T, Node* x) {
	auto y = x -> right;
	x -> right = y -> left;
	if (y -> left != T.nil) {
		y -> left -> parent = x;
	}
	y -> parent = x -> parent;

	//about x -> parent
	if (x -> parent == T.nil) {
		T.root = y;
	} else if (x == x -> parent -> left) {
		x -> parent -> left = y;
	} else {
		x -> parent -> right = y;
	}
	y -> left = x;
	x -> parent = y;
}

void RightRotate(RBT& T, Node* y) {
	auto x = y -> left;
	y -> left = x -> right;
	if (x -> right != T.nil) {
		x -> right -> parent = y;
	}
	x -> parent = y -> parent;

	//about y -> parent
	if (y -> parent == T.nil) {
		T.root = x;
	} else if (y = y -> parent -> left) {
		y -> parent -> left = x;
	} else {
		y -> parent -> right = x;
	}
	x -> right = y;
	y -> parent = x;
}

