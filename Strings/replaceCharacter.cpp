#include <bits/stdc++.h>
using namespace std;

int main() {
  string a;
  char c1, c2;
  cin >> a;
  cin >> c1 >> c2;
  int sizea = a.size();
  for (int i = 0; i < sizea; i++) {
    if (c1 == a[i]) {
      a[i] = c2;
    }
  }
  cout << a;
}
