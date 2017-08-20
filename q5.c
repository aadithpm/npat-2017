int maxConsecutive(int *a, int n, int m) {
  int sum = 0;
  for(int i = 0; i < m; i++) {
    sum += a[i];
  }
  int max = sum;
  for(int i = m; i < n; i++) {
  if(i <= i+m){
  	sum = 0;
	for(int j = 0; j < m; j++){
           sum += a[i+j];
	}
}
  if(sum > max){
	max = sum;
}
  }
  return max;
}
int main() {
    int n, m;
    int a[10];
    int i;
    
    scanf("%d %d", &n, &m);
    for(i=0; i<n; i++)
        scanf("%d", &a[i]);
    printf("%d\n", maxConsecutive(a, n, m));
    
    return 0;
}
