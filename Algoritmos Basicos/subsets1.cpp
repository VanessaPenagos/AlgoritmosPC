#include <bits/stdc++.h>
using namespace std;

int N = 3;
char L[] = {'a', 'b', 'c'};

bool on(int mask, int pos){
   return (mask & (1 << pos)) > 0;
 }
 
int set1(int mask, int pos){
   return mask | (1 << pos);
 }

void subsets(int pos, int mask) {
  if(pos == N) {
    for(int k = 0; k < N; k++) {
      if(on(mask, k)) {
        cout << L[k];
      }
    }
      cout << endl;
      return;
  }
  // Skip this element.
  subsets(pos+1, mask);
  // Try putting it in the subset.
  subsets(pos+1, set1(mask, pos));
}

int main(){
  subsets(0, 0);
  return 0;
}
