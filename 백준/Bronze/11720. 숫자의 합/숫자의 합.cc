#include <iostream>

using namespace std;
int main() {
     int N;
     string str;

     cin >> N;
     cin >> str;

     int sum = 0;
     for(char value : str) {
         sum += value - '0';
     }

     cout << sum << "\n";

     return 0;
}