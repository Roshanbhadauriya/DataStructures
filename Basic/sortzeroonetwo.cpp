#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  int zero = 0;
  int one = 0;
  int two = 0;
  for (int j = 0; j < n; j++) {
    if (arr[j] == 0) {
      zero++;
    }
    if (arr[j] == 1) {
      one++;
    }
    if (arr[j] == 2) {
      two++;
    }
  }
  for (int i = 1; i <= two; i++) {
    cout << 2 << " ";
  }
  for (int i = 1; i <= one; i++) {
    cout << 1 << " ";
  }
  for (int i = 1; i <= zero; i++) {
    cout << 0 << " ";
  }
}
