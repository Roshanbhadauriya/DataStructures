#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
  int x, y;
  cin >> x >> y;
  if ((x == y) || (x == 0 and y == 1) or (x == 1 and y == 0)) {
    cout << "Yes";
  } else {
    cout << "No";
  }
}
