#include <vector>
#include <cstdio>

using namespace std;

const int INF = 1 << 31;

void BuildMaxHeap(vector<int>& A);
void MaxHeapInsert(vector<int>& A, int key, int heapSize);

int main() {
	vector<int> vec{INF, 15, 13, 9, 5, 12, 8, 7, 4, 0, 6, 2, 1};
	int heapSize = vec.size() - 1;
	//BuildMaxHeap(vec);
	MaxHeapInsert(vec, 10, heapSize);
	for (int i = 1; i < vec.size(); i++) {
		printf("%d ", vec[i]);
	}


	return 0;

}
	
