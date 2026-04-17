#include <bits/stdc++.h>
using namespace std;

int main() {
  string a;

  getline(cin, a);

  int sizea = a.size();
  for (int i = 0; i < sizea; i++) {
    if (a[i] >= 'A' and a[i] <= 'Z') {
      a[i] += 32;
    } else if (a[i] >= 'a' and a[i] <= 'z') {
      a[i] -= 32;
    }
  }
  cout << a;
}
