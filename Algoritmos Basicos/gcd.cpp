#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {
  return b == 0 ? a : gcd(b, a % b);
}

int main(){
  //Ejemplo:
  cout << gcd(10, 5) << endl;

  return 0;
}
