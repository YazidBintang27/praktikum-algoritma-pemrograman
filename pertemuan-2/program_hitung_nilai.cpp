#include <iostream>

using namespace std;

string validasi_grade(int nilai){
	string grade;
	
	if(nilai >= 90 && nilai <= 100){
		grade = "A";
	}else if(nilai >= 70){
		grade = "B";
	}else if(nilai >= 50){
		grade = "C";
	}else if(nilai >= 40){
		grade = "D";
	}else{
		grade = "E";
	}
	return grade;
}

string validasi_keterangan(string grade){
	return (grade == "E" || grade == "D") ? "Tidak Lulus" : "Lulus";
}

int main(){
	
	int nilai;
	string nama, grade, keterangan;
	
	cout << "Masukkan Nama : ";
	cin >> nama;
	cout << "Masukkan Nilai : ";
	cin >> nilai;
	
	grade = validasi_grade(nilai);
	keterangan = validasi_keterangan(grade);
	
	cout << nama << " mendapatkan nilai " << grade << " dan dinyatakan " << keterangan << endl;
	return 0;
}
