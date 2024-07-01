
#include <iostream>
#include <vector>
using namespace std;
int main() {
    int N, count = 1, sum = 1;

    cin >> N;

    int sp = 1,ep = 1;
    while(ep != N){
        if (sum == N) {
            count++;
            ep++;
            sum += ep;
        }

        else if(sum > N) {
            sum -= sp;
            sp++;
        }

        else {
            ep++;
            sum += ep;
        }
    }

    cout << count;

    return 0;
}
