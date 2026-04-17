#include <bits/stdc++.h>
using namespace std;

int main() {
  string a, b;
  cin >> a >> b;
  int sizea = a.size();
  int sizeb = b.size();

  if (sizea == sizeb) {
    int count = 0;
    for (int j = 0; j < sizea; j++) {
      if (a[j] == b[j]) {
        count++;
      } else if (a[j] < b[j]) {
        cout << "A";
        break;
      } else if (a[j] > b[j]) {
        cout << "B";
        break;
      }
    }
    if (count == sizea) {
      cout << "Equal";
    }
  } else if (sizea > sizeb) {
    int count = 0;
    for (int i = 0; i < sizeb; i++) {
      if (a[i] == b[i]) {
        count++;
        continue;
      } else if (a[i] < b[i]) {
        cout << "A";
        break;
      } else if (a[i] > b[i]) {
        cout << "B";
        break;
      }
    }
    if (count == sizeb) {
      cout << "B";
    }
  } else if (sizea < sizeb) {
    int count = 0;
    for (int i = 0; i < sizea; i++) {
      if (a[i] == b[i]) {
        count++;
        continue;
      } else if (a[i] < b[i]) {
        cout << "A";
        break;
      } else if (a[i] > b[i]) {
        cout << "B";
        break;
      }
    }
    if (count == sizea) {
      cout << "A";
    }
  }
}
