#include <iostream>
#include <iomanip>

using std::cout;
using std::cin;
using std::endl;
using std::setw;


int main() {
	int num;
	cout << "������ ����";
	cin >> num;
	int i, n = 2;
	for (i = 1; i < 1001; i++)
	{
		cout << i << setw(num);
		cout << endl << setw(0);
		cout << i << "�� " << n << "�� = " << pow(i, n) << setw(num);
	}
	cout << endl;
	return 0;
}