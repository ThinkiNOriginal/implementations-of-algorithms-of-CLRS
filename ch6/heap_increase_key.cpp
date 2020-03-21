#include <vector>

using namespace std;

int Parent(int i) {
	return i >> 1;
}

void HeapIncreaseKey(vector<int>& A, int i, int key) {
	if (key < A[i]) {
		return 1 << 31;
	}
	A[i] = key;
	int par = Parent(i);
	while (i > 1 and A[par] < A[i]) {
		swap(A[i], A[par]);
		i = par;
	}
}
