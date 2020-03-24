#include "BST.h"

void Transplant(BST& T, Node* u, Node* v) {
	if (u -> parent == nullptr) {
		T.root = v;
	} else if (u == u -> parent -> left) {
		u -> parent -> left = v;
	} else {
		u -> parent -> right = v;
	}
	if (v != nullptr) {
		v -> parent = u -> parent;
	}
}
