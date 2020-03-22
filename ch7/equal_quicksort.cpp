#include <vector>
#include <tuple>

using namespace std;

tuple<int, int> EqualItemsPartition(vector<int>& A, int p, int r);

void EqualQuickSort(vector<int>& A, int p, int r) {
	if (p < r) {
		auto res = EqualItemsPartition(A, p, r);
		int s = get<0>(res);
		int e = get<1>(res);
		//printf("%d %d\n", s, e);
		EqualQuickSort(A, p, s);
		EqualQuickSort(A, e + 1, r);
	}
}

