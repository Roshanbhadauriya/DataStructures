#include <iostream>

using namespace std;

int main() {

  int n;
  cout << "Enter Number :";
  cin >> n;

  int ans = 1;

  for (int i = 1; i <= n; i++) {

    ans *= i;
  }
  cout << "Factorial of N :" << n << " is = " << ans << endl;
}
