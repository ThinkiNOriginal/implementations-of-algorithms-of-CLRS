#include <vector>
#include <algorithm>

using namespace std;

int HoarePartition(vector<int>& A, int p, int r) {
	int x = A[p];
	int i = p;
	int j = r;
	while (true) {
		while (A[j] > x) {
			j--;
		}
		while (A[i] <= x) {
			i++;
		}
		if (i < j) {
			swap(A[i], A[j]);
		} else {
			return j;
		}
	}
}
