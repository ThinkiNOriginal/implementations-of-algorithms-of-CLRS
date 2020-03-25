#include <vector>
#include <cmath>

using namespace std;

const int NINF = 1 << 31;

int BottomUpCutRod(vector<int>& price, int n) {
	vector<int> r(n + 1, NINF);
	r[0] = 0;
	for (int i = 1; i <= n; i++) {
		int q = NINF;
		for (int j = 1; j <= i; j++) {
			q = max(q, price[j] + r[i - j]);
		}
		r[i] = q;
	}
	return r[n];
}
