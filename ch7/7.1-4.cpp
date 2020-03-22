#include <vector>
#include <algorithm>

using namespace std;

int Partition(vector<int>& A, int p, int r) {
	int x = A[r];
	int i = p - 1;
	for (int j = p; j < r; j++) {
		if (A[j] >= x) {
			i++;
			swap(A[i], A[j]);
		}
	}
	swap(A[i + 1], A[r]);
	return i + 1;
}
