#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    int* arr;
    cin >> n;
    arr = new int[n];

    for (int i = 0; i < n; i++) {
        cin>>arr[i];
    }

    for (int i = n-1; i >0; i--) {
        for (int j = 0; j < i; j++) {
            if (arr[j] > arr[j + 1]) {
                int tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
            }
        }
        for (int j = 0; j < n; j++) {
            cout << arr[j] << " ";
        }
        cout << endl;
    }
}
