#include <iostream>
using namespace std;
 
int main() {
    int n;
    cin >> n;
    int arr[100][100];
    int num = 0;
    int x = 0, y = n / 2;
 
    for (int i = 0; i < 100; i++) {
        for (int j = 0; j < 100; j++) {
            arr[i][j] = -1;
        }
    }
 
    while (num < n * n) {
        arr[x][y] = ++num;
        if (num % n == 0) {
            x++;
        }
        else {
            x--;
            y--;
            if (x < 0) x = n - 1;
            if (y < 0) y = n - 1;
        }
    }
 
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}