#include <iostream>
#include <cstdlib>
#include <algorithm>
using namespace std;

long long answer = 1;
void fac(int n);

int main() {
    int n;
    cin >> n;
    fac(n);
    cout << answer;
}

void fac(int n) {
    if (n == 1) {
        cout << n << "! = " << n << endl;
    }
    else {
        cout << n << "!" << " = " << n << " * " << n - 1 << "!" << endl;
        answer *= n;
        fac(n - 1);
    }
}
