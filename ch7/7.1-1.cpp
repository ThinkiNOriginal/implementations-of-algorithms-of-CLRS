#include <vector>

using namespace std;

int Partition(vector<int>& A, int p, int r);

int main() {
	vector<int> A{13, 19, 9, 5, 12, 8, 7, 4, 21, 2, 6, 11};
	int q = Partition(A, 0, A.size() - 1);
	for (auto x : A) {
		printf("%d ", x);
	}
	return 0;
}

