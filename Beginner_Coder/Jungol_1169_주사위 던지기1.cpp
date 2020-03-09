#include <iostream>
#include <cstdlib>
#include <algorithm>
using namespace std;

void dice1(int n, int index);
void dice2(int n, int index, int s);
void dice3(int n, int index, int * chk);
void printAnswer(int n, int* arr);

int arr[5];

int main() {
    int n, m;
    cin >> n >> m;
    switch (m) {
    case 1:
        dice1(n, 1);
        break;
    case 2:
         dice2(n, 1, 1);
        break;
    case 3:
        int chk[10];
        dice3(n, 1, chk);
        break;
    default:
        return 0;
    }
}
void dice1(int n, int index) {
    if (index > n) {
        printAnswer(n, arr);
        return;
    }
    for (int i = 1; i <= 6; i++) {
        arr[index] = i;
        dice1(n, index + 1);
    }
}

void dice2(int n, int index, int s) {
    if (index > n) {
        printAnswer(n, arr);
        return;
    }

    for (int i = s; i <= 6; i++) {
        arr[index] = i;
        dice2(n, index+1, i);
    }
}

void dice3(int n, int index, int* chk) {
    if (index > n) {
        printAnswer(n, arr);
        return;
    }
    for (int i = 1; i <= 6; i++) {
        if (chk[i] == 1) continue;
        chk[i] = 1;
        arr[index] = i;
        dice3(n, index+1, chk);
        chk[i] = 0;
    }
}

void printAnswer(int n, int *arr) {
    for (int i = 1; i <= n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
