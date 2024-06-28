#include <iostream>

using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);


    int N;
    int M;
    int rangeSum[100001] = {};

    cin >> N >> M;

    for(int i = 1; i <= N; i++){
        int temp;
        cin >> temp;
        rangeSum[i] += rangeSum[i - 1] + temp;
    }


    for(int i = 0; i < M; i++) {
        int start, end;
        cin >> start >> end;
        cout << rangeSum[end] - rangeSum[start - 1] << "\n";
    }

    return 0;
}