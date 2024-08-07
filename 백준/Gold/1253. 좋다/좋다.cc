#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdlib>
using namespace std;
int main() {
    int N;
    cin >> N;
    vector<long> A(N,0);

    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    sort(A.begin(), A.end());
    
    int count = 0;

    for (int k = 0; k < N; k++) {
        long find = A[k];
        int i = 0, j = N - 1;

        while (i < j) {
            if(A[i] + A[j] == find){
                if(i != k && j != k) {
                    count++;
                    break;
                }

                else if(i == k) {
                    i++;
                }

                else if(j == k) {
                    j--;
                }
            }

            else if(A[i] + A[j] < find) {
                i++;
            }

            else {
                j--;
            }


        }
    }
        

    cout << count << '\n';    

    return 0;
}
