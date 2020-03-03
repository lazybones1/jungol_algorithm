#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    int* arr;
    cin >> n;
    arr = new int[n];
    int sum = 0;
    int big = 0;
    int answer = -100;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++) {
        if (arr[i] >= 0) {
            big += arr[i];
            sum += arr[i];
        }
        else {
            big = 0;
            if (sum + arr[i] > 0) {
                sum += arr[i];
            }
            else {
                sum = 0;
            }
        }
        answer = max(max(big, sum), answer);
    }
    cout << answer;
}
