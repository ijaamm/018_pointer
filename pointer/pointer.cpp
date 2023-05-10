#include <iostream>
using namespace std;

class mahasiswa {
public:
	int nim;
	void showNim(); //deklarasi method
};

void mahasiswa::showNim() { //implementasi method di luar class
	cout << "no induk = " << nim << endl;
}

int main()
{
	mahasiswa mhs{ 1 }; //objek mhs 
	mhs.showNim(); //member access operator

	mahasiswa& ref = mhs; //pointer refereces refmhs
	ref.nim = 2; //number access operator
	mhs.showNim();

	mahasiswa* pMhs = &mhs; //pointer deferece pMhs
	pMhs->nim = 3;  //arrow operator
	mhs.showNim();
	system("pause");
	return 0;

}