#include <iostream>

using namespace std;

int main(){
	
	cout << "## PROGRAM MENGHITUNG LUAS SEGITIGA ##" << endl;
	cout << "======================================" << endl;
	
	float alas, tinggi, luas;
	
	cout << "Masukkan alas segitiga : ";
	cin >> alas;
	cout << "Masukkan tinggi segitiga : ";
	cin >> tinggi;
	
	luas = 0.5  * alas * tinggi;
	
	cout << "Luas Segitiga = " << luas << endl;
	return 0;
}
