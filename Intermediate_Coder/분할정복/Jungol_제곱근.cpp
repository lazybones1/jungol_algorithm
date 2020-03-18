#include <iostream>
#include <cstdlib>
#include <cmath>
#include <algorithm>
using namespace std;

unsigned long long int squareR(unsigned long long int n);

int main() {
	unsigned long long int N;
	cin >> N;
	cout<< squareR(N);	
}
//바빌로니아법
unsigned long long int squareR(unsigned long long int n) {
	double x = 2;
	for (int i = 0; i < 100; i++) {
		x = (x + (n / x))/2;
	}
	return x;
}
