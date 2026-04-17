#include <bits/stdc++.h>
using namespace std;

int main() {
  string a;

  getline(cin, a);

  int sizea = a.size();
  int l = 0;
  int r = sizea - 1;
  bool notEqual = false;
  while (l < r) {
    if (a[r] != a[l]) {
      notEqual = true;
      cout << "No";
      break;
    }
    l++;
    r--;
  }
  if (notEqual == false) {
    cout << "YES";
  }
}
