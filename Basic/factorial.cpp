#include <iostream>

using namespace std;

int factorial(int n) {

  int ans = 1;

  for (int i = 1; i <= n; i++) {

    ans *= i;
  }

  return ans;
}

// binomial factorial
int binomial(int n, int r) {

  int nfr = factorial(n);
  int rfr = factorial(r);
  int nrfr = factorial(n - r);
  int answ = nfr / (rfr * nrfr);
  return answ;
}

int main() {

  int n, r;
  cout << "Enter Number :";
  cin >> n >> r;

  int answer = binomial(n, r);
  cout << answer;
}
