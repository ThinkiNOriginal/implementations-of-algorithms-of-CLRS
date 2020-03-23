#include "tree.h"

using namespace std;

void PrintNodes(Node* t) {
	if (t) {
		printf("%d ", t -> key);
		PrintNodes(t -> left);
		PrintNodes(t -> right);
	}
}

int main() {
	Tree t;
	Node n1 = Node(1);
	Node n2 = Node(3);
	Node n3 = Node(5);
	n1.left = &n2;
	n2.right = &n3;
	t.root = &n1;
	PrintNodes(t.root);

	return 0;
}


