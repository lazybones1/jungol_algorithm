#include <iostream>
#include <cstdlib>
#include <algorithm>
using namespace std;

int arr[7];
int sum = 0;

void diceSum(int n, int m, int index);
void printAnswer(int n, int m, int* arr);

int main() {
    int n, m;
    cin >> n >> m;
    diceSum(n, m, 1);
}

void diceSum(int n, int m, int index) {
    if (index > n) {
        printAnswer(n, m, arr);
        return;
    }
    for (int i = 1; i <= 6; i++) {
        arr[index] = i;
        diceSum(n, m, index+1);
    }
}

void printAnswer(int n, int  m,int* arr) {
    for (int i = 1; i <= n; i++) {
        sum += arr[i];
    }
    if (sum == m) {
        for (int i = 1; i <= n; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    else {
        sum = 0;
    }

}
