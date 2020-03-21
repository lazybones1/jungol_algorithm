#include <iostream>
#include <cstdlib>
#include <cmath>
#include <algorithm>
using namespace std;

int* arrSort;
int* arrTmp;
int n;
void mergeSort(int* arrSort, int low, int high, int* arrTmp);

int main() {
	cin >> n;
	arrSort = new int[n];
	arrTmp = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> arrSort[i];
	}
	mergeSort(arrSort, 0, n - 1, arrTmp);
}

void mergeSort(int* arrSort, int low, int high, int* arrTmp) {
	if (low >= high) {
		return;
	}
	int mid = (low + high) / 2;
	mergeSort(arrSort, low, mid, arrTmp);
	mergeSort(arrSort, mid+1, high, arrTmp);
	int i = low;
	int j = mid + 1;
	for (int k = low; k <= high; k++) {
		if (j > high) arrTmp[k] = arrSort[i++];
		else if (i > mid) arrTmp[k] = arrSort[j++];
		else if (arrSort[i] < arrSort[j]) arrTmp[k] = arrSort[i++];
		else arrTmp[k] = arrSort[j++];
	}
	for (i = low; i <= high; i++) arrSort[i] = arrTmp[i];
	for (int t = 0; t < n; t++) cout << arrSort[t] << " ";
	cout << endl;
}
