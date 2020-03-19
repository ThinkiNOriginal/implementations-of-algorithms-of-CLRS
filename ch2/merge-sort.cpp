#include <vector>

using namespace std;

void Merge(vector<int>& A, int p, int q, int r);


void MergeSort(vector<int>& A, int p, int r) {
	if (p < r) {
		int q = (p + r) / 2;
		MergeSort(A, p, q);
		MergeSort(A, q + 1, r);
		Merge(A, p, q, r);
	}
}
