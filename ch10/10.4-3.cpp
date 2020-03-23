#include "tree.h"
#include <stack>

using namespace std;

void PrintNodes(Node* t) {
	if (t == nullptr)
		return ;

	stack<Node*> s;
	s.push(t);
	while (!s.empty()) {
		auto x = s.top();
		s.pop();
		if (x -> left) {
			s.push(x -> left);
		} 
		if (x -> right) {
			s.push(x -> right);
		}
		printf("%d ", x -> key);
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


