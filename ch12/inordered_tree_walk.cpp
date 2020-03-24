#include "BST.h"
#include <stack>

void InorderTreeWalk(Node* x) {
	if (x) {
		InorderTreeWalk(x -> left);
		printf("%d -> ", x -> key);
		InorderTreeWalk(x -> right);
	}
}

void InorderTreeWalkStack(Node* x) {
	if (x == nullptr)
		return;

	stack<Node*> s;
	while (true) {
		while (x) {
			s.push(x);
			x = x -> left;
		}
		auto tmp = s.top();
		s.pop();
		printf("%d -> ", tmp -> key);
		if (tmp -> right) {
			x = tmp -> right;
		}
		if (s.empty() and x == nullptr)
			break;
	}
}


		
	
