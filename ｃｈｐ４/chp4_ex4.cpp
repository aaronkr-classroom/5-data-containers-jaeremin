#include <iostream>
#include <iomanip>

using std::cout;
using std::cin;
using std::endl;
using std::setw;


int main() {
	double num;
	cout << "변수를 지정 : ";
	cin >> num;
	double i, n = 2;
	for (double i = 1; i < 1001; ++i)
	{
		cout << (double)i << setw(num);
		cout << endl << setw(0);
		cout << (double)i << "의 " << (double)n << "승 = " << pow(i, n) << setw(num);
	}
	cout << endl;
	return 0;
}