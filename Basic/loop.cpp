#include <bits/stdc++.h>
using namespace std;

void atoz(char a) {

  for (char i = a; i <= 'Z'; i++) {

    cout << i << " ";
  }
}

void reminder(int n) { cout << n % 10 << endl; }

int main() {
  int i;
  cin >> i;
  reminder(i);
}
