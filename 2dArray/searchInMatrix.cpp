#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b, c;
  cin >> a >> b >> c;
  int arr[a][b];
  int found = 0;
  for (int i = 0; i < a; i++) {
    for (int j = 0; j < b; j++) {
      cin >> arr[i][j];
    }
  }
  for (int i = 0; i < a; i++) {
    for (int j = 0; j < b; j++) {
      if (arr[i][j] == c) {
        cout << "true";
        found++;
        return 0;
      }
    }
  }
  if (found == 0) {
    cout << "false";
  }
}
