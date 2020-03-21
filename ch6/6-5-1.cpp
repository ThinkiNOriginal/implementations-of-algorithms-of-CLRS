#include <vector>
#include <cstdio>

using namespace std;

const int INF = 1 << 31;

int HeapExtractMax(vector<int>& A, int heapSize);
//void BuildMaxHeap(vector<int>& A);

int main() {
	vector<int> vec{INF, 15, 13, 9, 5, 12, 8, 7, 4, 0, 6, 2, 1};
	int heapSize = vec.size() - 1;
	//BuildMaxHeap(vec);
	while (heapSize >= 1) {
		printf("%d\n", HeapExtractMax(vec, heapSize));
		heapSize--;
	}
	return 0;

}
	
