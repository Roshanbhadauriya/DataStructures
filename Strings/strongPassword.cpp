#include <bits/stdc++.h>
using namespace std;

int main() {
  string a;

  getline(cin, a);
  int hasSpecialChar = 0;
  int hasLowerCase = 0;
  int hasUpperCase = 0;
  int hasDigit = 0;
  int sizea = a.size();
  if (sizea >= 10) {
    for (int i = 0; i < sizea; i++) {
      if (a[i] >= 'A' and a[i] <= 'Z') {
        hasUpperCase++;
      } else if (a[i] >= 'a' and a[i] <= 'z') {
        hasLowerCase++;
      } else if (a[i] >= '0' and a[i] <= '9') {
        hasDigit++;
      } else if (a[i] != ' ') {
        hasSpecialChar++;
      }
    }
    if (hasUpperCase > 0 and hasLowerCase > 0 and hasDigit > 0 and
        hasSpecialChar > 0) {
      cout << "Strong";
    } else {
      cout << "Weak";
    }
  } else {
    cout << "Weak";
  }
}
