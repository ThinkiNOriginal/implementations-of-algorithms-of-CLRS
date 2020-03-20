#include <vector>

using namespace std;

struct ArrInfo {
	int maxLeft  = -1;
	int maxRight = -1;
	int suma     =  0;
};

ArrInfo FindMaxCrossingSubarray(vector<int>& A, int low, int mid, int high);

ArrInfo FindMaximumSubarray(vector<int>& A, int low, int high) {
	if (low == high) {
		ArrInfo res;
		res.maxLeft = low;
		res.maxRight = high;
		res.suma = A[low];
		return res;
	} else {
		int mid = (low + high) / 2;
		ArrInfo lsub = FindMaximumSubarray(A, low, mid);
		ArrInfo rsub = FindMaximumSubarray(A, mid + 1, high);
		ArrInfo cross = FindMaxCrossingSubarray(A, low, mid, high);
		if (lsub.suma >= rsub.suma and lsub.suma >= cross.suma) {
			return lsub;
		} else if (rsub.suma >= lsub.suma and rsub.suma >= cross.suma) {
			return rsub;
		} else {
			return cross;
		}
	}
}


