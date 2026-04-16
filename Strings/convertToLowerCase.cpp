#include <iostream>
using namespace std;
int main() {
  char ch;
  cin >> ch;
  if (ch >= 'A' and ch <= 'Z') {
    cout << char(ch + 32);
  } else {
    cout << ch;
  }
}
