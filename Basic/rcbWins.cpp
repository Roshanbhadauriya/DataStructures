#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  int mid = n / 2;
  int left = mid - 1;
  int right = mid;
  while ((left >= 0 && right <= n - 1)) {

    cout << arr[left] << " ";
    cout << arr[right] << " ";
    left--;
    right++;
  }
}
