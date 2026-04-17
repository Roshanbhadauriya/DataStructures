#include <bits/stdc++.h>
using namespace std;

int main() {
  string a;

  getline(cin, a);

  int sizea = a.size();
  int words = 1;
  for (int i = 0; i < sizea; i++) {
    if (a[i] == ' ') {
      words++;
    }
  }
  cout << words;
}
