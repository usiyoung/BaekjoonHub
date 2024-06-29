#include <iostream>
#include <vector>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int arraySize, answerCount;

     cin >> arraySize >> answerCount;

    vector<vector<int> > origin(arraySize + 1,vector<int>(arraySize + 1,0));
    vector<vector<int> > rangeSum(arraySize + 1,vector<int>(arraySize + 1,0));

    for(int i = 1; i <= arraySize; i++) {
        for(int j = 1; j <= arraySize; j++) {
            cin >> origin[i][j];
            rangeSum[i][j] = rangeSum[i][j - 1] + rangeSum[i - 1][j] - rangeSum[i - 1][j - 1] + origin[i][j];
        }
    }


    for(int i = 0; i < answerCount; i++) {
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;

        int result = rangeSum[x2][y2] - rangeSum[x1 - 1][y2] - rangeSum[x2][y1 - 1] + rangeSum[x1 - 1][y1 - 1];

        cout << result << '\n';
    }



    return 0;
}
