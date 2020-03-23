#include <cstdio>

struct Node {
	int val;
	Node* next = nullptr;
	Node(int x) : val{x} {}
};

struct List {
	Node* head = nullptr;
	void InsertNode(Node* n) {
		if (this -> head == nullptr) {
			this -> head = n;
		} else {
			auto p = this -> head;
			while (p != nullptr and p -> next != nullptr) {
				p = p -> next;
			}
			p -> next = n;
		}
	}
};

void ReverseList(List& l) {
	if (l.head != nullptr) {
		auto p = l.head;
		auto q = p -> next;
		while (q != nullptr) {
			auto tmp = q -> next;
			p -> next = tmp;
			q -> next = l.head;
			l.head = q;
			q = tmp;
		}
	}
}

int main() {
	List l;
	Node n1 = Node(1);
	Node n2 = Node(3);
	Node n3 = Node(5);
	l.InsertNode(&n1);
	l.InsertNode(&n2);
	l.InsertNode(&n3);
	ReverseList(l);
	while (l.head != nullptr) {
		printf("%d\n", l.head -> val);
		l.head = l.head -> next;
	}
	return 0;
}

