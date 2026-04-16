#include <iostream>
using namespace std;
int main() {
  string fn, ln;
  string fn2, ln2;
  cin >> fn >> ln;
  cin >> fn2 >> ln2;

  if (ln == ln2) {
    cout << "YES";
  } else {
    cout << "NO";
  }
}
