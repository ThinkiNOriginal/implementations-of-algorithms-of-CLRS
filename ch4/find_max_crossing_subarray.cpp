#include <vector>

using namespace std;

const int INF = 1 << 31;

struct ArrInfo {
	int maxLeft  = -1;
	int maxRight = -1;
	int suma     =  0;
};

ArrInfo FindMaxCrossingSubarray(vector<int>& A, int low, int mid, int high) {
	int leftSum = INF;
	int tempL = 0;
	int maxLeft = -1;

	for (int i = mid; i >= low; i--) {
		tempL += A[i];
		if (tempL > leftSum) {
			leftSum = tempL;
			maxLeft = i;
		}
	}

	int rightSum = INF;
	int maxRight = -1;
	int tempR = 0;
	for (int i = mid + 1; i <= high; i++) {
		tempR += A[i];
		if (tempR > rightSum) {
			rightSum = tempR;
			maxRight = i;
		}
	}

	ArrInfo ai;
	ai.maxLeft = maxLeft;
	ai.maxRight = maxRight;
	ai.suma = leftSum + rightSum;
	return ai;
}
		
			
