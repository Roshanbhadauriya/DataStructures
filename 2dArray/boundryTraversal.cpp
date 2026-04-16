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

  // top
  for (int j = 0; j < b; j++) {
    cout << arr[0][j] << " ";
  }
  // right

  for (int j = 1; j < a; j++) {
    cout << arr[j][b - 1] << " ";
  }

  // bottom
  if (a > 1) {
    for (int j = b - 2; j >= 0; j--) {
      cout << arr[a - 1][j] << " ";
    }
  }
  // left
  if (b > 1) {
    for (int j = a - 2; j >= 1; j--) {
      cout << arr[j][0] << " ";
    }
  }
}
