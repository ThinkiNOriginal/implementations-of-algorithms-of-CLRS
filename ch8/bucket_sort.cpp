#include <vector>
#include <cstdio>
#include <algorithm>

using namespace std;

vector<float> BucketSort(vector<float>& A) {
	int len = A.size();
	vector<vector<float>> B(len);
	for (int i = 0; i < len; i++) {
		B[len * A[i]].push_back(A[i]);
	}
	vector<float> res;
	for (int i = 0; i < len; i++) {
		sort(B[i].begin(), B[i].end());
		for (auto x : B[i])
			res.push_back(x);
	}
	return res;
}


