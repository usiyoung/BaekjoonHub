 
#include <iostream>;
using namespace std;

int checkArr[4];
int arr[4];
int checkSecret = 0;

void Add(char c);
void Remove(char c);

int main() {
    int S, P;
    cin >> S >> P;

    int Result = 0;
    string A;
    cin >> A;

    for (int i = 0; i < 4; i++) {
        cin >> checkArr[i];
        if(checkArr[i] == 0){
            checkSecret++;
        }
    }

    for (int i = 0; i < P; i++) {
        Add(A[i]);
    }

    if(checkSecret == 4){
        Result++;
    }

  for(int i = P; i < S; i++) {
      int j = i - P;
      Add(A[i]);
      Remove(A[j]);
      if(checkSecret == 4){
          Result++;
      }
  }

  cout << Result << '\n';
}

void Add(char c) {
    switch(c) {
    case 'A':
        arr[0]++;
        if(arr[0] == checkArr[0]) checkSecret++;
    break;
    case 'C':
        arr[1]++;
        if(arr[1] == checkArr[1]) checkSecret++;
        break;
    case 'G':
        arr[2]++;
        if(arr[2] == checkArr[2]) checkSecret++;
        break;
    case 'T':
        arr[3]++;
        if(arr[3] == checkArr[3]) checkSecret++;
        break;
    }
};

void Remove(char c) {
    switch(c) {
    case 'A':
        if(arr[0] == checkArr[0]) checkSecret--;
        arr[0]--;
        break;
    case 'C':
        if(arr[1] == checkArr[1]) checkSecret--;
        arr[1]--;
        break;
    case 'G':
        if(arr[2] == checkArr[2]) checkSecret--;
        arr[2]--;
        break;
    case 'T':
        if(arr[3] == checkArr[3]) checkSecret--;
        arr[3]--;
        break;
    }
}