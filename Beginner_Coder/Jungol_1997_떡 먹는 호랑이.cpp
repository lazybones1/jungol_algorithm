#include <iostream>
using namespace std;

int main()
{
    int d, k;
    int* arr;
    int* A;
    int* B;
    cin >> d >> k;

    arr = new int[d];
    arr[d - 1] = k;
    A = new int[d];
    B = new int[d];

    A[0] = 1; A[1] = 0;
    B[0] = 0; B[1] = 1;

    for (int i = 2; i < d; ++i) {
        A[i] = A[i - 1] + A[i - 2];
        B[i] = B[i - 1] + B[i - 2];
    }

    for (int i = 1; i <= k / 2; ++i) {
        for (int j = i; j <= k; ++j) {
            if (k == (i * A[d - 1] + j * B[d - 1])) {
                cout << i << endl << j << endl;
                return 0;
            }
            else if (k < (i * A[d - 1] + j * B[d - 1])) {
                break;
            }
        }
    }
    return 0;
}
