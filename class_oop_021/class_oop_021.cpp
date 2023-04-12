#include <iostream>
#include "class_oop_021.h"
using namespace std;

class Mahasiswa {
private :
	int nim;
	string nama;
public:
	void inputdata() {
		cout << "Masukan Nim : ";
		cin >> nim;
		cout << "Masukan Nama : ";
		cin >> nama;
	}
	void tampildata() {
		cout << "\nNim : " << nim << endl;
		cout << "Nama : " << nama << endl;
	}

};

class Matakuliah {
private:
	string kode;
	string namamk;
	int sks;

public:
	void InputMk();
	void TampilMk();
};

void Matakuliah::InputMk() {
	cout << "\nMasukan kode Mata Kuliah : ";
	cin >> kode;
	cout << "Masukan Nama Mata Kuliah : ";
	cin >> namamk;
	cout << "Masukan Sks Mata Kuliah : ";
	cin >> sks;
}

void Matakuliah::TampilMk() {
	cout << "\nKode : " << kode << endl;
	cout << "Nama Matakuliah : " << namamk << endl;
	cout << "Jumlah Sks : " << sks << endl;
}

int main()
{
	Mahasiswa mhs;
	Matakuliah mk;

	mhs.inputdata();
	mhs.tampildata();



}