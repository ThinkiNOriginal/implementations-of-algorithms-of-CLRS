#include <vector>

using namespace std;

const int INF = 1 << 30;

int Merge(vector<int>& A, int p, int q, int r) {
	int n1 = q - p + 1;
	int n2 = r - q;
	int res = 0;

	vector<int> L(n1 + 1, 0);
	vector<int> R(n2 + 1, 0);

	for (int i = 0; i < n1; i++) {
		L[i] = A[p + i];
	}
	L[n1] = INF;

	for (int i = 0; i < n2; i++) {
		R[i] = A[q + i + 1];
	}
	R[n2] = INF;
	
	int i = 0;
	int j = 0;
	for (int k = p; k <= r; k++) {
		if (L[i] <= R[j]) {
			A[k] = L[i];
			i++;
		} else {
			A[k] = R[j];
			res++;
			j++;
		}
	}
	return res;
}


