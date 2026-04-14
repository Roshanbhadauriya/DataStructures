#include <bits/stdc++.h>
#include <climits>
using namespace std;

int main() {
  int n;
  cin >> n;
  int arr[n];
  int min = INT_MAX;
  int index = 0;
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  for (int j = 0; j < n; j++) {
    if (min >= arr[j]) {
      min = arr[j];
      index = j;
    }
  }
  cout << index + 1;
}
