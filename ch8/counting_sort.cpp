#include <vector>

using namespace std;

void CountingSort(vector<int>& A, vector<int>& B, int k) {
	vector<int> C(k + 1, 0);
	for (int j = 0; j < A.size(); j++) {
		C[A[j]]++;
	}
	for (int i = 1; i <= k; i++) {
		C[i] = C[i - 1] + C[i];
	}
	for (int i = A.size() - 1; i >= 0; i--) {
		int x = A[i];
		B[C[x]] = x;
		C[x]--;
	}
}



