#include <iostream>

using namespace std;

int main()
{
	int n;
	
	cout << "Masukan Panjang Pola : ";
	cin >> n;

	cout << "Pola 1" << endl;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= i; j++) {
			cout << "*";
		}
		cout << endl;
	}

	cout << "Pola 2" << endl;
	for (int i = 1; i <= n; i++) {
		for (int j = n; j >= i; j--) {
			cout << "*";
		}
		cout << endl;
	}
	return 0;
}