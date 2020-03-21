#include <vector>

using namespace std;

const int INF = 1 << 31;

//int HeapMaximum(vector<int>& A);
void MaxHeapify(vector<int>& A, int i, int heapSize);

int HeapExtractMax(vector<int>& A, int heapSize) {
	if (heapSize < 1)
		return INF;

	int res = A[1];
	A[1] = A[heapSize];
	heapSize--;
	MaxHeapify(A, 1, heapSize);
	return res;
}
