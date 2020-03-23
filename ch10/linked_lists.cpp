#include <vector>
#include <cstdio>

using namespace std;

struct Node {
	int key;
	Node* prev;
	Node* next;
};

struct List {
	Node* head;
};

Node* ListSearch(List& l, int k) {
	auto x = L.head;
	while (x != nullptr and x.key != k) {
		x = x.next;
	}
	return x;
}

void ListInsert(List& l, Node& x) {
	x.next = L.head;
	if (L.head != nullptr) {
		L.head.prev = x;
	}
	L.head = x;
	x.prev = nullptr;
}

void ListDetele(List& l, Node& x) {
	if (x.prev != nullpt) {
		x.prev.next = x.next;
	} else {
		L.head = x.next;
	}
	if (x.next != nullptr) {
		x.next.prev = x.prev;
	}
}

