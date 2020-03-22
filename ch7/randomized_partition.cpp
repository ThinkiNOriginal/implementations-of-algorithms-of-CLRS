#include <vector>
#include <random>
#include <algorithm>

using namespace std;

int Partition(vector<int>& A, int p, int r);

int RandomizedPartition(vector<int>& A, int p, int r) {
	default_random_engine dre;
	uniform_int_distribution<int> ui(p, r);
	int tmp = ui(dre);
	swap(A[r], A[tmp]);
	return Partition(A, p, r);
}
