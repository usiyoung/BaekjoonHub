#include <iostream>

using namespace std;

int main() {
    int N = 0;
    int max = 0;
    int scoreArr[1000];

    cin >> N;

    for(int i = 0; i < N; ++i){
        cin >> scoreArr[i];

        if(max < scoreArr[i]){
            max = scoreArr[i];
        }
    }

    double sum = 0;
    for(int i = 0; i < N; ++i){
        sum += ((double)scoreArr[i] / max) * 100;
    }

    double result;
    result = sum / N;
    
    cout << result;

    return 0;
}