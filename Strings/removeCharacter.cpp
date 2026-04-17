#include <bits/stdc++.h>
using namespace std;

int main() {
  string a;
  char c1;
  cin >> a;
  cin >> c1;
  int sizea = a.size();
  for (int i = 0; i < sizea; i++) {
    if (c1 == a[i]) {

    } else {
      cout << a[i];
    }
  }
}
