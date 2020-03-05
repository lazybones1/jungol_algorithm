#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int n;
    cin >> n;
    int* arr;
    arr = new int[n];
    int min = 101;
    int tmp = -1;

    for (int i = 0; i < n; i++) {
        cin>>arr[i];
    }

    for (int i = 0; i < n - 1; i++) {
        for (int j = i; j < n; j++) {
            if (arr[j] < min) {
                min = arr[j];
                tmp = j;
            }
        }
        min = 101;
        int temp = arr[i];
        arr[i] = arr[tmp];
        arr[tmp] = temp;
        for (int j = 0; j < n; j++) {
            cout << arr[j] << " ";
        }
        cout << endl;
    }
}
