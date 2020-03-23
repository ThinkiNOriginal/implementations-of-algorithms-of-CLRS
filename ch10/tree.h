#include <cstdio>

using namespace std;

struct Node {
	int key;
	Node* left = nullptr;
	Node* right = nullptr;
	Node* parent = nullptr;
	Node(int x) : key{x} {}
};

struct Tree {
	Node* root = nullptr;
};



