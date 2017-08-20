#include <stdio.h>

int has(int *a, int n, int x, int k) {
if(n == 0 && k > 0){
  return 0;
}

else if(n == 0 && k == 0){
 return 1; 
}

else if(k == 0){
 return 1; 
}
  if(a[n-1] == x) {
    return has(a, n-1, x, k-1);
  } else {
    return has(a, n-1, x, k);
  }
}
int main() {
  int x, k, n;
  int a[10];
  int i;
  
  scanf("%d %d %d", &n, &x, &k);
  for(i=0; i<n; i++) 
      scanf("%d", &a[i]);
  printf("%d\n", has(a, n, x, k));
  return 0;
}

