#include <iostream>
using namespace std;

int faktorialRekursif(int n){
	if (n == 0 || n == 1){
		return 1;
	}
	else{
		return n * faktorialRekursif(n-1);
	}
}

int main(){
	int n;
	cout << "Masukkan bilangan: ";cin >> n;
	cout << "Faktorial dari " << n << " adalah " << faktorialRekursif(n) << endl;
	return 0;
}
