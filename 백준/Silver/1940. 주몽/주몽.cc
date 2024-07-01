
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, M;

    cin >> N >> M;

    vector<int> arr(N);
    for(int i = 0; i < N; i++){
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end());

    int count = 0, fp = 0, bp = N - 1;
    while(fp < bp) {
        if(arr[fp] + arr[bp] < M){
           fp++;
        }
        else if(arr[fp] + arr[bp] > M){
            bp--;
        }
        else{
            count++;
            fp++;
            bp--;
        }
    }

    cout << count;


    return 0;
}