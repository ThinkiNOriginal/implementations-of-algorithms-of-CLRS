#include <vector>

using namespace std;


bool BinarySearch(vector<int>& A, int p, int q, int T) {
	int low = p;
	int high = q;
	while (low < high) {
		int mid = (low + high) / 2;
		if (T < A[mid]) {
			low = mid + 1;
		} else if(T > A[mid]) {
			high = mid - 1;
		} else {
			return true;
		}
	}
	return false;
}
