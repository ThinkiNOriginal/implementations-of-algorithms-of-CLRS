#include <cstdio>

using namespace std;

struct Node {
	int key;
	Node* parent = nullptr;
	Node* left = nullptr;
	Node* right = nullptr;

	Node(int x) {
		key = x;
	}
	//satellite data
	
};


struct BST {
	Node* head = nullptr;
};
