#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(void) {
	srand(time(NULL));
	for (int i = 0; i < 5; i++) {
		cout << "Random Number #" << i + 1 << ": " << rand() % 100 << endl;
	}
	return 0;
}