#include <vector>

using namespace std;

int RandomizedPartition(vector<int>& A, int p, int r);

void RandomizedQuicksort(vector<int>& A, int p, int r) {
	if (p < r) {
		int q = RandomizedPartition(A, p, r);
		RandomizedQuicksort(A, p, q - 1);
		RandomizedQuicksort(A, q + 1, r);
	}
}
