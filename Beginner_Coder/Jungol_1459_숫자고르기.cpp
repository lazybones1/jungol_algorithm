#include <iostream>
#include <cstdlib>
#include <algorithm>
using namespace std;

int arr[100];
int isVisit[100];
int answer[100];
int last;
int cnt = 0;

void search(int index);

int main() {
    int N;
    cin >> N;
    for (int i = 1; i <= N; i++) {
        cin >> arr[i];
    }
    for (int i = 1; i <= N; i++) {
        isVisit[i] = 1;
        last = i;
        search(i);
        isVisit[i] = 0;
    }
    sort(answer, answer + cnt-1);
    cout << cnt<<endl;
    for (int i = 0; i < cnt; i++) {
        cout << answer[i] << endl;;
    }
 }

void search(int index) {
    if (isVisit[(arr[index])] != 1) {
        isVisit[(arr[index])] = 1;
        search(arr[index]);
        isVisit[(arr[index])] = 0;
    }
    if (arr[index] == last) {
        answer[cnt++] = last;
    }
}
