#include <vector>

using namespace std;

const int INF = 1 << 31;

void HeapIncreaseKey(vector<int>& A, int i, int key);

void MaxHeapInsert(vector<int>& A, int key, int heapSize) {
	heapSize++;
	if (heapSize >= A.size()) {
		A.push_back(INF);
	} else {
		A[heapSize] = INF;
	}
	HeapIncreaseKey(A, heapSize, key);
}

