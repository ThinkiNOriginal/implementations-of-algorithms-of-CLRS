#include <vector>
#include <algorithm>
#include <tuple>
#include <cstdio>

using namespace std;


tuple<int, int> EqualItemsPartition(vector<int>& A, int p, int r) {
	int x = A[r];
	int smaller = p - 1;
	int equal = p - 1;
	//int bigger = p - 1;
	for (int j = p; j <= r; j++) {
		if (A[j] < x) {
			smaller++;
			equal++;
			//bigger++;
			swap(A[smaller], A[j]);
			if (equal != smaller)
				swap(A[equal], A[j]);
		} else if (A[j] == x) {
			equal++;
			//bigger++;
			swap(A[j], A[equal]);
		}
	}
	//tuple<int, int> res;
	return {smaller, equal};
}
