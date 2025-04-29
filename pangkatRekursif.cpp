#include <iostream>
using namespace std;

int pangkat(int a, int b){
	if (b == 0){
		return 1;
	} else {
	return a * pangkat(a,b-1);	
	}
}

int main(){
	int a,b;
	cout << "Masukkan bilangan(a): "; cin >> a;
	cout << "Masukkan pangkat(b): " ; cin >> b;
	cout << a << "^" << b << " = " << pangkat(a,b);
	
	return 0;
}
