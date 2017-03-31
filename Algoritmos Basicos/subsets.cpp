#include <bits/stdc++.h>
using namespace std;

int N = 3;
char L[] = {'a', 'b', 'c'};

bool on(int mask, int pos){
   return (mask & (1 << pos)) > 0;
 }

void subsets() {
  for(int mask = 0; mask < (1 << N); mask++) {
    for(int k = 0; k < N; k++) {
      if(on(mask, k)) {
        cout << L[k];
      }
    }
      cout << endl;
  }
}


int main(){
  subsets();
  return 0;
}
