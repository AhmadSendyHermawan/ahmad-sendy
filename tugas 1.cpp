#include<iostream>

using namespace std;

int main() {
	double l, a, t;
	
	cout <<"Masukkan Alas Segitiga : ";
	cin >> a;
	cout << "Masukkan Tinggi Segitiga : ";
	cin >> t;
	
	l = 0.5 * a * t;
	cout <<"Luas Segitiga adalah : " << l << endl;
	return 0;
}
