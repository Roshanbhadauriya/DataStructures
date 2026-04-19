#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;
  string names[t][1];
  for (int i = 0; i < t; i++) {
    cin >> names[i][0];
  }
  string name;
  cin >> name;
  bool found = false;
  for (int j = 0; j < t; j++) {
    if (name == names[j][0]) {
      cout << "YES";
      found = true;
      break;
    }
  }
  if (!found) {
    cout << "NO";
  }
}
