#include <bits/stdc++.h>
using namespace std;

void intersection() {
  int n;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  int m;
  cin >> m;
  int arb[m];
  for (int j = 0; j < m; j++) {
    cin >> arb[j];
  }
  for (int k = 0; k < n; k++) {
    for (int l = 0; l < m; l++) {
      if (arr[k] == arb[l]) {
        cout << arr[k] << " ";
        arb[l] = INT_MIN;
        break;
      }
    }
  }
}

int main() {
  int t;
  cin >> t;
  for (int i = 0; i < t; i++) {
    intersection();
    cout << endl;
  }
}
