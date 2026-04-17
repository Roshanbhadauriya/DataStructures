#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  int arr[n];
  int x;
  bool found = false;
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  cin >> x;
  for (int j = 0; j < n; j++) {
    if (x == arr[j]) {
      cout << "YES";
      found = true;
      break;
    }
  }
  if (found == false) {
    cout << "NO";
  }
}
