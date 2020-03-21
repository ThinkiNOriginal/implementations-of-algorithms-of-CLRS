#include <vector>
#include <algorithm>

using namespace std;

void BuildMaxHeap(vector<int>& A);
void MaxHeapify(vector<int>& A, int i, int heapSize);

void HeapSort(vector<int>& A) {
	int len = A.size();
	int heapSize = len - 1;
	BuildMaxHeap(A);
	for (int i = len - 1; i >= 2; i--) {
		swap(A[1], A[i]);
		heapSize--;
		MaxHeapify(A, 1, heapSize);
	}
}
