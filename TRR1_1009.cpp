#include <iostream>
using namespace std;
bool checkp(double a, double b) {
  if (a == 0) {
    if (b == 0) {
      return true;
    }
    return false;
  } else {
    if (-b / a < 0) {
      return true;
    } else {
      return false;
    }
  }
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  double a, b;
  cin >> a >> b;
  if (checkp(a, b)) {
    cout << 1 << endl;
  } else {
    cout << 0 << endl;
  }
  return 0;
}
