#include <iostream>
#include <vector>

using namespace std;

vector<bool> visitied;
vector<int> current;

void backtrack(int N, int M) {
    if(current.size() == M) {
        for (int num: current) {
            cout << num << " ";

        }
        cout << '\n';
        return;
    }

    for (int i = 1; i <= N; ++i) {
        if(visitied[i - 1]) continue;

        current.push_back(i);
        visitied[i - 1] = true;

        backtrack(N, M);

        current.pop_back();
        visitied[i - 1] = false;
    }
}

int main() {
    int N, M;
    cin >> N >> M;

    visitied.push_back(false);
    backtrack(N, M);

    return 0;
};