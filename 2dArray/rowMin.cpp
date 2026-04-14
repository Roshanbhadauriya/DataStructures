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
  for (int i = 0; i < a; i++) {
    int min = INT_MAX;
    for (int j = 0; j < b; j++) {
      if (min > arr[i][j]) {
        min = arr[i][j];
      }
    }
    cout << min << " ";
  }
}
