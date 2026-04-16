#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b;
  cin >> a >> b;
  int arr[a][b];
  for (int i = 0; i < a; i++) {
    for (int j = 0; j < b; j++) {
      cin >> arr[i][j];
    }
  }
  for (int i = 0; i < b; i++) {
    if (i % 2 == 0) {
      for (int j = 0; j < a; j++) {
        cout << arr[j][i] << " ";
      }
    } else {
      for (int k = a - 1; k >= 0; k--) {
        cout << arr[k][i] << " ";
      }
    }
  }
}
