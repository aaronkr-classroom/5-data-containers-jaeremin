#include <iostream>
#include <iomanip>

using std::cout;
using std::cin;
using std::endl;
using std::setw;


int main() {
	double num;
	cout << "������ ���� : ";
	cin >> num;
	double i, n = 2;
	for (double i = 1; i < 1001; ++i)
	{
		cout << (double)i << setw(num);
		cout << endl << setw(0);
		cout << (double)i << "�� " << (double)n << "�� = " << pow(i, n) << setw(num);
	}
	cout << endl;
	return 0;
}