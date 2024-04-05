#include <iostream>
#include <iomanip>

using std::cout;
using std::cin;
using std::endl;
using std::setw;


int main() {
	int i, n = 2;
	for (i = 1; i < 100; i++)
	{
		cout << i << setw(2);
		cout << endl << setw(0);
		cout << i << "ÀÇ " << n << "½Â = " << pow(i, n) << setw(2);
	}
	cout << endl;
	return 0;
}