#include <iostream>
#include <string>

using namespace std;

int main() {
  char a[4], b[4];
  scanf("%s%s", &a, &b);

  char tmp;
  tmp = a[3];
  a[3] = a[0];
  a[0] = tmp;

  tmp = b[3];
  b[3] = b[0];
  b[0] = tmp;

  int A, B;
  A = stoi(a);
  B = stoi(b);

  (A > B) ? printf("%d\n", A) : printf("%d\n", B);
}

