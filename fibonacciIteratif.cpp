#include <iostream>
using namespace std;

int fibonacciIteratif(int n){
	if(n == 0){
		return 0;
	}
	if(n == 1){
		return 1;
	}
	
	int prev1 = 1, prev2 = 0, current;
	for(int i = 2; i <= n; i++){
		current = prev1 + prev2;
		prev2 = prev1;
		prev1 = current;
	}
	return current;
}

int main(){
	int n;
	cout << "Masukkan indeks Fibonacci ke-n: ";cin >> n;
	cout << "Nilai fibonacci ke-" << n << " adalah " << fibonacciIteratif(n) << endl;
	return 0;
}
