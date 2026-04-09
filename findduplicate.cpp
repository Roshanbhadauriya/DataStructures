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
    for (int j = 0; j < n; j++) {
      for (int z = j + 1; z < n; z++) {
        if (arr[z] == arr[j]) {
          cout << arr[z];
        }
      }
    }
    cout << endl;
  }
}
