


int bin_coef(int n, int k){ //Dinamic Programming
  int pascaltri[n+1][n+1];
  for(int i=0; i<n+1; i++){
    pascaltri[i][0] = 1;
    pascaltri[i][i] = 1;
  }
  for(int i=2; i<n+1; i++)
    for(int j=1; j<i; j++)
      pascaltri[i][j] = pascaltri[i-1][j-1] + pascaltri[i-1][j];
  return pascaltri[n][k];
}

int A = bin_coef(int 3, int K);
