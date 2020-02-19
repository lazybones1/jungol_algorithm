#include <iostream>
#include <cstring>
#include <string>
using namespace std;

int main() {
    char key_v[26];
    cin.getline(key_v, 80, '\n');
    char arr[80];
    cin.getline(arr, 80, '\n');
    for (int i = 0; i < strlen(arr); i++) {
        if (arr[i] == 32) {
            cout << ' ';
        }
        else if (arr[i] != NULL && arr[i] >= 'a' && arr[i]<'{') {
            cout << (key_v[(int)(arr[i])-'a']);
        }
        else if (arr[i] != NULL && arr[i] >= 'A' && arr[i]<'[') {
            arr[i] = toupper(key_v[(int)(arr[i]) - 'A']);
            cout << arr[i];
        }
    }
}
