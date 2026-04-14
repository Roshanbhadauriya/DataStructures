#include <bits/stdc++.h>
using namespace std;

int main() {

  int n;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  int count = 1;
  for (int j = 1; j < n; j++) {
    if (arr[0] == arr[j]) {
      count++;
    }
  }

  if (count == n) {
    cout << "YES";
  } else {
    cout << "NO";
  }
}
