#include <vector>

using namespace std;

int Merge(vector<int>& A, int p, int q, int r);


int MergeSort(vector<int>& A, int p, int r) {
	static int res = 0;
	if (p < r) {
		int q = (p + r) / 2;
		MergeSort(A, p, q);
		MergeSort(A, q + 1, r);
		res += Merge(A, p, q, r);
	}
	return res;

}
