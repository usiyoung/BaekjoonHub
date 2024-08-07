#include <iostream>
#include <stack>
#include <vector>
using namespace std;
int main() {
    int N;
    cin >> N;
    vector<int> A(N,0);

    vector<int> ans(N,0);
    stack<int> myStack;

    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }

    for (int i = 0; i < N; i++) {
        while(!myStack.empty() && A[myStack.top()] < A[i]) {
            ans[myStack.top()] = A[i];
            myStack.pop();
        }

        myStack.push(i);
    }

    while(!myStack.empty()){
        ans[myStack.top()] = -1;
        myStack.pop();
    }

    for (int i = 0; i < N; ++i) {
        cout << ans[i] << " ";
    }
    return 0;
}