#include <iostream>

using std::cout;
using std::cin;
using std::endl;

void SwapByRef2(int &ref1, int &ref2) {
	int tmp = ref1;
	ref1 = ref2;
	ref2 = tmp;
}

int main(void) {
	int num = 12;
	int *ptr = &num;
	int **dptr = &ptr;

	int &ref = num;
	int *(&pref) = ptr;		// int * 형을 참조하는 참조자 pref
	int **(&dpref) = dptr;

	cout << ref << endl;
	cout << *pref << endl;
	cout << **dpref << endl;

	int num1 = 10, num2 = 20;
	SwapByRef2(num1, num2);
	cout << num1 << endl << num2 << endl;
	return 0;
}