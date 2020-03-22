#include <random>
#include <iostream>

using namespace std;

int main() {
	default_random_engine dre;
	uniform_int_distribution<> dis(1, 6);

	for (int i = 0; i < 10; i++) {
		cout << dis(dre) << ' ';
	}
	cout << endl;
	return 0;
}
