#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  int arr[n];
  for (int l = 0; l < n; l++) {
    cin >> arr[l];
  }
  for (int i = 0; i < n - 1; i++) {
    int min = arr[i];

    int minIndex = i;
    for (int j = i + 1; j < n; j++) {
      if (min > arr[j]) {
        min = arr[j];
        minIndex = j;
      }
    }

    swap(arr[i], arr[minIndex]);
    cout << "Pass " << i + 1 << ": ";
    for (int k = 0; k < n; k++) {
      cout << arr[k] << " ";
    }
    cout << ", min_selected = " << min << endl;
  }
}
