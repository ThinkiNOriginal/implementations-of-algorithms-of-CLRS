#include <cstdio>

using namespace std;

struct Queue{
	struct Node {
		int val;
		Node* next = nullptr;
	};

	struct List{
		Node* head = nullptr;
		Node* tail = nullptr;
	};

	List l;

	void Enqueue(int x) {
		Node* tmp = new Node;
		tmp -> val = x;
		if (l.head == nullptr) {
			l.head = tmp;
		}
		if (l.tail == nullptr) {
			l.tail = tmp;
		} else {
			l.tail -> next = tmp;
			l.tail = tmp;
		}
	}

	int Dequeue() {
		if (l.head == nullptr) {
			return -1;
		} else {
			auto x = l.head;
			l.head = l.head -> next;
			return x -> val;
		}
	}
};



int main() {
	Queue q;
	q.Enqueue(1);
	q.Enqueue(3);
	for (int i = 1; i <= 3; i++) {
		printf("%d\n", q.Dequeue());
	}
	return 0;
}

