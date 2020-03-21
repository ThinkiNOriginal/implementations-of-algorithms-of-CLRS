#include <vector>
#include <algorithm>

using namespace std;

int Left(int i) {
	return 2 * i;
}

int Right(int i) {
	return 2 * i + 1;
}

int Parent(int i) {
	return i >> 1;
}

void MaxHeapify(vector<int>& A, int i, int heapSize) {
	int l = Left(i);
	int r = Right(i);
	int largest = i;

	if (l <= heapSize and A[l] > A[i]) {
		largest = l;
	} else {
		largest = i;
	}
	if (r <= heapSize and A[r] > A[largest]) {
		largest = r;
	}
	if (largest != i) {
		swap(A[largest], A[i]);
		MaxHeapify(A, largest, heapSize);
	}
}
