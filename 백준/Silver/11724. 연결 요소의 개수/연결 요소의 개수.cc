#include <iostream>
#include <vector>

using namespace std;

void dfs(int x);

vector<bool> c;
vector<vector<int> > a;

int main() {
    int N, M;
    cin >> N >> M;

    c.resize(N + 1, false);
    a.resize(N + 1);

    for (int i = 1; i <= M; ++i) {
        int first = 0;
        int second = 0;
        cin >> first >> second;
        a[first].push_back(second);
        a[second].push_back(first);
    }
    
    int count = 0;
    
    for (int i = 1; i <= N; ++i) {
        if(!c[i]) {
            dfs(i);
            count++;
        };
    }

    cout << count;
    return 0;
}

void dfs(int x) {
    if(c[x]) return;
    c[x] = true;

    for (int i = 0; i < a[x].size(); ++i) {
        int y = a[x][i];
        dfs(y);
    }
};
