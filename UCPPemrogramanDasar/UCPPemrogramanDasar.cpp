//1.  int bilangan, void input, float luas

// 2.Prosedur :
//void bubbleSortArray() { // procedur untuk mengurutkan array dengan metode bubble sort
//int pass = 1; // step 1
//do {
//	for (int j = 0; j <= n - 1 - pass; j++) { //step 2
//		if (arr[j] > arr[j + 1]) { // step 3
//			int temp = arr[j];
//			arr[j + 1] = temp;
//		}
//	}
//	pass = pass + 1; //step 4
//
//	cout << endl;
//
//} while (pass <= n - 1); //step 5
//}

// 2.Fungsi:
//void input()
//{
//	cout << "Masukan bilangan Pertama = ";
//	cin >> bilA;
//	cout << "Masukkan bilangan Kedua = ";
//	cin >> bilB;
//}
    
//3. int pengurangan(int a, int b)
//{
//	return a - b;
//}

//4. int main() {
//Mahasiswa mhs;
//cout << "Nomor Mahasiswa : ";
//cin >> mhs.nim;
//cout << "Nama Mahasiswa : ";
//cin >> mhs.nama;
//cout << "Alamat Mahasiswa : ";
//cin >> mhs.alamat;
//cout << "Umur Mahasiswa : ";
//cin >> mhs.umur;

//cout << endl;
//cout << "\n NIM : " << mhs.nim;
//cout << "\n Nama : " << mhs.nama;
//cout << "\n Alamat : " << mhs.alamat;
//cout << "\n Umur : " << mhs.umur;
//}

//5. struct DetailAlamat {
   //string desa;
   //string kota;
   //};

//6.

#include <iostream>
using namespace std;

class City {
public: // akses modifier
	string namakota;
	int status;

	void output() {
		cout << "Nama: " << namakota << endl;
		cout << "status: " << status << endl;
	}
};

class City {
private:
	string City;
	int Sehat;
public:
	void input() {
		cout << "Kode KOTA: ";
		cin >> KodeKOTA;
		cout << "Status KOTA: ";
		cin >> StatusKOTA;
	}

	void output() {
		cout << "Kode KOTA: " << KodeKOTA << endl;
		cout << "Status KOTA: " << Status KOTA << endl;		
	}
};

int main() {
	Kota cty;
	Status stat;

	cty.nama();
	cty.status();
	
	cty.output();

	stat.input();
	stat.output();

	return 0;
}


