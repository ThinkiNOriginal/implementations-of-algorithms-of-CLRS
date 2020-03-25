#include "red_black_tree.h"

void RBTransplant(RBT& T, Node* u, Node* v) {
	if (u -> parent == T.nil) {
		T.root = v;
	} else if (u == u -> parent -> left) {
		u -> parent -> left = v;
	} else {
		u -> parent -> right = v;
	}
	v ->parent = u -> parent;
}
