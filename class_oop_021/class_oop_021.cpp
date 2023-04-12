#include <iostream>
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