#include <vector>
#include <algorithm>

using namespace std;

void MaxHeapify(vector<int>& A, int i, int heapSize);

void HeapDelete(vector<int>& A, int i, int heapSize) {
	swap(A[i], A[heapSize]);
	heapSize--;
	MaxHeapify(A, i, heapSize);
}
	
