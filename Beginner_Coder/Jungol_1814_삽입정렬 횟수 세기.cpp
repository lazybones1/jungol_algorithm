#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    int* arr;
    cin >> n;
    arr = new int[n];
    int cnt = 0;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for (int i = 1; i < n; i++) {
        for (int j = 0; j < i; j++) {
            if (arr[i] < arr[j]) {
                int tmp = arr[i];
                for (int k = i; k > j; k--) {
                    arr[k] = arr[k - 1];
                    cnt++;
                }
                arr[j] = tmp;
                break;
            }
        }
    }
    cout << cnt << endl;
}
