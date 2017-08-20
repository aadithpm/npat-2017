#include <stdio.h>

int checkAddSeq(int *x, int *y, int n) {
  for(int i = 0; i < n; i++) {
     int sum = 0;
     for(int j = i; j > -1; j--) {
	sum += x[j];
     }
  if(y[i] != sum){
	return 0;
     }
  }
  return 1;
}

int main() {
    int n, i;
    int x[10], y[10];
    
    scanf("%d", &n);
    for(i=0; i<n; i++)
        scanf("%d", &x[i]);
    for(i=0; i<n; i++)
        scanf("%d", &y[i]);
    
    printf("%d\n", checkAddSeq(x, y, n));
    return 0;
}

