#include <iostream>
#include <cstdlib>
#include <cmath>
#include <algorithm>
using namespace std;

int n;
void quickSort(int* arr, int low, int high);

int main() {
	cin >> n;
	int* arr = new int[n];

	for (int i = 0; i < n; i++) {
		cin>>arr[i];
	}
	quickSort(arr, 0, n-1);
}

void quickSort(int* arr, int low, int high) {
	int i, pivot;
	if (low < high) {
		i = low - 1;
		pivot = arr[high];
		for (int j = low; j < high; j++) {
			if (arr[j] < pivot) swap(arr[++i], arr[j]);
		}
		swap(arr[++i], arr[high]);

		for (int j = 0; j < n; j++) {
			cout << arr[j] << " ";
		}
		cout << endl;

		quickSort(arr, low, i - 1);
		quickSort(arr, i + 1, high);
	}

}
