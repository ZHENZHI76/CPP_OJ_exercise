#include <iostream>
using namespace std;

int main() {
  int a, b, c;
  cin >> a >> b >> c;

  int count = 0;
  int xMax = c / a;
  for (int x = 0; x * a <= c; x++) {
    int y = (c - x * a) / b;
    if (y * b == c - x * a) {
      count++;
    }
  }

  cout << count << endl;
  
  return 0;
}