#include <bits/stdc++.h>
using namespace std;

int main() {
  int t = 1;
  //  cin >> t;
  for (int k = 0; k < t; k++) {
    int n;
    cin >> n;
    int arr[n];
    int x;
    cin >> x;
    int pairCount = 0;
    for (int i = 0; i < n; i++) {
      cin >> arr[i];
    }

    for (int j = 0; j < n; j++) {
      for (int z = j + 1; z < n; z++) {
        for (int u = z + 1; u < n; u++) {
          for (int l = u + 1; l < n; l++) {
            if ((arr[j] - (2 * arr[z]) + (3 * arr[u]) - (4 * arr[l])) == x) {
              pairCount++;
            }
          }
        }
      }
    }
    cout << pairCount << " " << endl;
  }
}
