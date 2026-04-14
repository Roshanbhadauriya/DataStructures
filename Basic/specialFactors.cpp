#include <bits/stdc++.h>
using namespace std;

int main() {

  int n;
  cin >> n;
  int count = 0;
  for (int i = 1; i <= n; i++) {
    if (n % i == 0) {
      if (i % 10 == 2 or i % 10 == 7) {
        cout << i << " ";
        count++;
      }
    }
  }
  if (count == 0) {
    cout << "-1";
  }
}
