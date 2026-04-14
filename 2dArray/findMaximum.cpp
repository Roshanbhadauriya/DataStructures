#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b;
  cin >> a >> b;
  int arr[a][b];
  int max = INT_MIN;
  for (int i = 0; i < a; i++) {
    for (int j = 0; j < b; j++) {
      cin >> arr[i][j];
    }
  }
  for (int i = 0; i < a; i++) {
    for (int j = 0; j < b; j++) {
      if (max < arr[i][j]) {
        max = arr[i][j];
      }
    }
  }
  cout << max;
}
