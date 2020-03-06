#include <iostream>
#include <cstdlib>
#include <algorithm>
using namespace std;

void push(int, int*);
int pop();
int top = 0;
int stack[13];
int main() {
    int m;
    cin >> m;
    for (int i = 0; i < m; i++) {
        char ch[15];
        cin >> ch;
        char op = ch[0];
        int num1, num2, tmp;
        switch (op) {
        case '-':
            num1 = pop();
            num2 = pop();
            tmp = num2 - num1;
            push(tmp, stack);
            break;
        case '+':
            num1 = pop();
            num2 = pop();
            tmp = num2 + num1;
            push(tmp, stack);
            break;
        case '/':
            num1 = pop();
            num2 = pop();
            tmp = num2 / num1;
            push(tmp, stack);
            break;
        case '*':
            num1 = pop();
            num2 = pop();
            tmp = num2 * num1;
            push(tmp, stack);
            break;
        default:
            tmp = atoi(ch);
            push(tmp, stack);
            break;
        }
    }
    int answer = pop();
    cout << answer;
}

void push(int n, int* stack)
{
    stack[top++] = n;
}

int pop()
{
    int n = stack[top - 1];
    stack[top - 1] = NULL;
    top--;

    return n;
}
