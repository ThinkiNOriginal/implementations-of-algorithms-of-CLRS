#include <vector>

using namespace std;

struct Stack{ 
	struct Node {
		int val;
		Node* next = nullptr;
	};

	struct List {
		Node* head = nullptr;
	};

	List l;

	void Push(int x) {
		Node* tmp = new Node;
		tmp -> val = x;

		if (l.head == nullptr) {
			l.head = tmp;
		} else {
			tmp -> next = l.head;
			l.head = tmp;
		}
	}

	int Pop() {
		if (l.head != nullptr) {
			auto x = l.head;
			l.head = x -> next;
			return x -> val;
		} else {
			return -1;
		}
	}

};

int main() {
	Stack s;
	s.Push(1);
	s.Push(2);
	for (int i = 1; i <= 3; i++) {
		auto res = s.Pop();
		printf("%d\n", res);
	}
	return 0;
}

