#include <vector>

using namespace std;

void MaxHeapify(vector<int>& A, int i, int heapSize);

void BuildMaxHeap(vector<int>& A) {
	int len = A.size();
	for (int i = len / 2; i >= 1; i--) {
		MaxHeapify(A, i, len);
	}
}

