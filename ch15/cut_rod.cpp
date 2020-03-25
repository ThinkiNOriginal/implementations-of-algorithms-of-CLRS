#include <vector>
#include <cmath>

using namespace std;

const int NINF = 1 << 31;

int CutRod(vector<int>& price, int n) {
	if (n == 0) {
		return 0;
	}
	int q = NINF;
	for (int i = 1; i <= n; i++) {
		q = max(q, price[i] + CutRod(price, n - i));
	}
	return q;
}


