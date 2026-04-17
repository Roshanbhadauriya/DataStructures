#include <bits/stdc++.h>
using namespace std;

int main() {
  string a;

  getline(cin, a);

  int sizea = a.size();
  for (int i = 0; i < sizea; i++) {
    if (' ' == a[i]) {

    } else {
      cout << a[i];
    }
  }
}
