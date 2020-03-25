#include "red_black_tree.h"

void RBInsert(RBT& T, Node* z) {
	auto y = t.nil;
	auto x = T.root;
	while (x != T.nil) {
		y = x;
		if (z -> key < x -> key) {
			x = x -> left;
		} else {
			x = x -> right;
		}
	}
	z -> parent = y;
	if (y == T.nil) {
		T.root = z;
	} else if (z -> key < y -> key) {
		y -> left = z;
	} else {
		y -> right = z;
	}
	z -> left = T.nil;
	z -> right = T.nil;
	z -> Color = RED;
	RBInsertFixup(T, z);
}
