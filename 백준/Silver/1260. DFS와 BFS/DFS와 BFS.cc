#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

void dfs(int x);
void bfs(int start);

vector<vector<int> > a(1000000);
vector<bool> dc;
vector<bool> bc;

int main() {
    int N, M, V;
    cin >> N >> M >> V;

    dc.resize(N, false);
    bc.resize(N, false);
    for (int i = 0; i < M; ++i) {
        int s, e;
        cin >> s >> e;
        a[s].push_back(e);
        a[e].push_back(s);
    }

    for (int i = 0; i < a.size(); ++i) {
        sort(a[i].begin(), a[i].end());
    }

    dfs(V);
    cout << '\n';
    bfs(V);

//    4 5 1
//    1 2
//    1 3
//    1 4
//    2 4
//    3 4

//    5 5 3
//    5 4
//    5 2
//    1 2
//    3 4
//    3 1

    return 0;
}

void dfs(int x) {
    if(dc[x]) return;
    dc[x] = true;
    cout << x << " ";
    for (int i = 0; i < a[x].size(); ++i) {
        int y = a[x][i];
        dfs(y);
    }
};

void bfs(int start) {
    queue<int> q;
    q.push(start);
    bc[start] = true;

    while(!q.empty()){
        int y = q.front();
        cout << y << " ";
        q.pop();
        for (int i = 0; i < a[y].size(); ++i) {
            int x = a[y][i];
            if(!bc[x]) {
                q.push(x);
                bc[x] = true;
            }
        }
    }

};

