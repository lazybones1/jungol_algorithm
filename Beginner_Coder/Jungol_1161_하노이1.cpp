#include <iostream>
#include <cstdlib>
#include <algorithm>
using namespace std;

void hanoi(int n, int from, int by, int to);
void printMove(int from, int to);

int main() {
    int n;
    cin >> n;
    hanoi(n, 1, 2, 3);
}

void hanoi(int n, int from, int by, int to) {
    if (n == 1) {
        cout << n<<" : " ;
        printMove(from, to);
    }
    else {
        hanoi(n - 1, from, to, by);
        cout << n<<" : ";
        printMove(from, to);
        hanoi(n - 1, by, from, to);
    }
}

void printMove(int from, int to) {
    cout << from << " -> " << to << endl;
}
