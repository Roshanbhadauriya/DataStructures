#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  int passmark;
  cin >> n;
  int arr[n];
  int x = 0;
  int y = 0;
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  cin >> passmark;
  for (int j = 0; j < n; j++) {
    if (passmark <= arr[j]) {
      x++;
    } else {
      y++;
    }
  }
  cout << "Pass: " << x << endl;
  cout << "Fail: " << y << endl;
}
