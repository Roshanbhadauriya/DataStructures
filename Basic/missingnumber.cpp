#include <bits/stdc++.h>
using namespace std;

int main() {
  int t = 1;
  cin >> t;
  for (int k = 0; k < t; k++) {
    int n;
    cin >> n;
    int ans = 0;
    int arr[n];
    for (int i = 0; i < n; i++) {
      cin >> arr[i];
    }
    for (int j = 0; j < n; j++) {
      ans = ans ^ arr[j];
    }
    cout << ans << endl;
  }
}
