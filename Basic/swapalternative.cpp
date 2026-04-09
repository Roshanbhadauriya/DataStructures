#include <bits/stdc++.h>
using namespace std;

int main() {
  int t = 1;
  cin >> t;

  for (int k = 0; k < t; k++) {
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++) {

      cin >> arr[i];
    }
    for (int z = 1; z < n; z = z + 2) {
      swap(arr[z], arr[z - 1]);
    }

    for (int j = 0; j < n; j++) {
      cout << arr[j] << " ";
    }
  }
}
