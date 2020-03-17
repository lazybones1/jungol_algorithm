#include <iostream>
#include <cstdlib>
#include <algorithm>
using namespace std;

void binarySearch(int* arr, int low, int high);
void find(int* ai, int* bi, int N, int Q);

int main() {
	int N, Q;
	int* ai;
	int* bi;
	cin >> N;
	ai = new int[N];
	for (int i = 0; i < N; i++) {
		cin >> ai[i];
	}
	cin >> Q;
	bi = new int[Q];
	for (int i = 0; i < Q; i++) {
		cin >> bi[i];
	}
	find(ai, bi, N, Q);
}

int	binarySearch(int* arr, int target, int low, int high) {
	if (low > high) {
		return -1;
	}
	int mid = (low + high) / 2;
	if (arr[mid] == target) {
		return mid;
	}else if (arr[mid] > target) {
		binarySearch(arr, target, low, mid -1);
	}else if (arr[mid] < target) {
		binarySearch(arr, target, mid +1, high);
	}
}

void find(int* ai, int* bi, int N, int Q) {
	for (int i = 0; i < Q; i++) {
		cout<<binarySearch(ai, bi[i], 0, N-1)<<" ";
	}
}
