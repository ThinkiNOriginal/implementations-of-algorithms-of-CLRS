#include "red_black_tree.h"

void RBInsertFixup(RBT& T, Node* z) {
	while (z -> parent -> Color == RED) {
		if (z -> parent == z -> parent -> parent -> left) {
			//y is z's uncle
			auto y = z -> parent -> parent -> right;
			if (y -> Color == RED) {     		// case1
				z -> parent -> Color = BLACK;
				y -> Color = BLACK;
				z -> parent -> parent -> Color = RED;
				z = z -> parent -> parent;
			} else {
				if (z == z -> parent -> right) {
					z = z -> parent;
					LeftRotate(T, z);
				}
				z -> parent -> Color = BLACK;
				z -> parent -> parent -> Color = RED;
				RightRotate(T, z -> parent -> parent);
			}
		} else {
			auto y = z -> parent -> parent -> left;
			if (y -> Color == RED) {
				z -> parent -> Color = BLACK;
				z -> parent -> parent -> Color = RED;
				z = z -> parent -> parent;
			} else {
				if (z == z -> parent -> left) {
					z = z -> parent;
					RightRotate(T, z);
				}
				z -> parent -> Color = BLACK;
				z -> parent -> parent -> Color = RED;
				LeftRotate(T, z -> parent -> parent);
			}
		}
	}
	T.root.Color = BLACK;
}

