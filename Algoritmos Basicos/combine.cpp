
#include <bits/stdc++.h>
using namespace std;

char L[] = {'a', 'b', 'c'};
char comb[] = { };
int K = 2;
int N = 3;

void combine(int pos, int size){
    if(N-pos < K-size)
        return;

    if(size == K){
        for(int k = 0; k < size; k++)
            cout << comb[k];
        cout << endl;
        return;
    }

    // Use the current element in the combination.
    comb[size] = L[pos];
    combine(pos+1, size+1);

    // Skip the current element.
    combine(pos+1, size);
}


int main(){
  combine(0,0);
  return 0;
}
