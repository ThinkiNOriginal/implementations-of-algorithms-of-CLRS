#include <vector>

using namespace std;


void Merge(vector<int>& A, int p, int q, int r) {
	int n1 = q - p + 1;
	int n2 = r - q;

	vector<int> L(n1, 0);
	vector<int> R(n2, 0);

	for (int i = 0; i < n1; i++) {
		L[i] = A[p + i];
	}

	for (int i = 0; i < n2; i++) {
		R[i] = A[q + i + 1];
	}
	
	int i = 0;
	int j = 0;
	int k = p;

	while (i < n1 and j < n2) {
		if (L[i] <= R[j]) {
			A[k] = L[i];
			i++;
		} else {
			A[k] = R[j];
			j++;
		}
		k++;
	}

	while (i < n1) {
		A[k] = L[i];
		k++;
		i++;
	}

	while (j < n2) {
		A[k] = R[j];
		k++;
		j++;
	}

}


