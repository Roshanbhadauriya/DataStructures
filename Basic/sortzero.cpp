#include <bits/stdc++.h>
using namespace std;

int main() {

  int n;
  cin >> n;
  int arr[n];

  int zeros = 0;
  int ones = 0;
  for (int i = 0; i < n; i++) {

    cin >> arr[i];
  }

  for (int j = 0; j < n; j++) {
    if (0 == arr[j]) {
      zeros++;
    } else {
      ones++;
    }
  }

  for (int k = 0; k < n; k++) {
    if (zeros > k) {

      arr[k] = 0;

    } else {
      arr[k] = 1;
    }
  }

  for (int i = 0; i < n; i++) {

    cout << arr[i];
  }
}
