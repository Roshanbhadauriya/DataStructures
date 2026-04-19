#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  int x;
  cin >> x;
  int l = 0;
  int r = n - 1;
  int mid = (l + r) / 2;
  bool found = false;
  while (l <= r) {
    if (x == arr[mid]) {
      cout << "YES";
      found = true;
      break;
    } else if (x > arr[mid]) {
      l = mid + 1;
      mid = (l + r) / 2;
    } else if (x < arr[mid]) {
      r = mid;
      mid = (l + r) / 2;
    } else {
      cout << "NO";
    }
  }

  if (!found) {
    cout << "NO";
  }
}
