#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  for (int j = 0; j < n; j++) {
    int count = 0;
    for (int k = 0; k < n; k++) {
      if (j != k) {
        if (arr[j] == arr[k]) {
          count++;
        }
      }
    }
    if (count == 0) {
      cout << arr[j] << " ";
    }
  }
}
