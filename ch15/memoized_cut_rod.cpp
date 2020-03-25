#include <vector>

using namespace std;

const int NINF = 1 << 31;

int MemoizedCutRodAux(vector<int>& p, int n, vector<int>& r) {
	int q = NINF;
	if (r[n] >= 0) {
		return r[n];
	}
	if (n == 0) {
		q = 0;
	} else {
		for (int i = 1; i <= n; i++) {
			q = max(q, p[i] + MemoizedCutRodAux(p, n - i, r));
		}
	}
	r[n] = q;
	return q;
}


int MemoizedCutRod(vector<int>& price, int n) {
	vector<int> r(n + 1, NINF);
	return MemoizedCutRodAux(price, n, r);
}
