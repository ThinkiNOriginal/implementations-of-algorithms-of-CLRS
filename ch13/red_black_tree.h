#include <cstdio>

using namespace std;

enum Color{RED, BLACK};

struct Node {
	Color c = BLACK;
	int key;
	Node* left = nullptr;
	Node* right = nullptr;
	Node* parent = nullptr;
};

struct RBT {
	Node* root = nullptr;
	Node* nil = nullptr;
};
