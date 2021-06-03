#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int a = -1;
	char b;
	cin >> b;
	string c;
	cin >> c;
	for (int i = 0; i < c.length(); i++) {
		if (c[i] == b) {
			a = i;
			break;
		}
	}
	if (a >= 0) {
		cout << "Символ под номером:" << a + 1;
	}
	else {
		cout << "Нет символа";
	}
	return 0;
}
