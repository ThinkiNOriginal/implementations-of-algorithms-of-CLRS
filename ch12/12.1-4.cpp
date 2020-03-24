#include "BST.h"

void Preorder(Node* x) {
	if (x) {
		printf("%d -> ", x -> key);
		Preorder(x -> left);
		Preorder(x -> right);
	}
}

void Postorder(Node* x) {
	if (x) {
		Postorder(x -> left);
		Postorder(x -> right);
		printf("%d -> ", x -> key);
	}
}
