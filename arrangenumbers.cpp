#include <bits/stdc++.h>
using namespace std;

int main() {
  int t = 1;
  cin >> t;

  for (int k = 0; k < t; k++) {
    int n;
    cin >> n;
    int arr[n];
    int count = 1;
    int j = n - 1;
    int a = 0;
    while (count <= n) {
      if (count % 2 == 0) {
        arr[j] = count;
        j--;
      } else if (count % 2 != 0) {
        arr[a] = count;
        a++;
      }
      count++;
    }

    for (int j = 0; j < n; j++) {
      cout << arr[j] << " ";
    }
  }
}
