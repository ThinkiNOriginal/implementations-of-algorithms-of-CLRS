#include "red_black_tree.h"

void RBTransplant(RBT&, Node*, Node*);

void RBDelete(RBT& T, Node* z) {
	auto y = z;
	auto x = T.nil;
	auto yOriginalColor = y -> Color;
	if (z -> left == T.nil) {
		x = z -> right;
		RBTransplant(T, z, z -> right);
	} else if (z -> right == T.nil) {
		x = z -> left;
		RBTransplant(T, z, z -> left);
	} else {
		y = TreeMinimum(z -> right);
		yOriginalColor = y -> Color;
		x = y -> right;
		if (y -> parent == z) {
			x -> parent = y;
		} else {
			RBTransplant(T, y, y -> right);
			y -> right = z -> right;
			y -> right -> parent = y;
		}
		RBTransplant(T, z, y);
		y -> left = z -> left;
		y -> left -> p = y;
		y -> Color = z -> Color;
	}
	if (yOriginalColor == BLACK) {
		RBDeleteFixup(T, x);
	}
}
