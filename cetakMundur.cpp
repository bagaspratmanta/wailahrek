#include <iostream>
using namespace std;

void cetakMundur(int n){
	if(n == 0){
		return;
	}
	cout << n << endl;
	cetakMundur(n-1);
}

int main(){
	int n;
	cout << "Masukkan angka: "; cin >> n;
	cout << "Hasil cetak mundur: " << endl;
	cetakMundur(n);
	
	return 0;
}
