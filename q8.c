#include <stdio.h>
#include <stdlib.h>

void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

void mostFreq3(int a[], int n, int b[3]){
    int c,c1=0,t,c2=0,c3=0;
  	int temp;
    //Bubble sort
    for(int i = 0; i < n-1; i++){
        for(int j = 0; j < n-i-1; j++){
          if(a[j] > a[j+1])
            swap(&a[j],&a[j+1]);
        }
    }
  for(int i = 0; i < n; i++){
      temp = a[i];
    	if(temp == -100)
      	continue;
      c = 1;
      a[i] = -100;
      for(int j = 0; j < n; j++)
      {
        if(a[j] == temp)
        {
          c += 1;
          a[j] = -100;
        }
      }
      //printf("Count of %d: %d\n",temp,c);
      if(c > c1)
      {
        c3 = c2;
        b[2] = b[1];
        c2 = c1;
        b[1] = b[0];
        c1 = c;
        b[0] = temp;
      }
      else if( c > c2)
      {
        c3 = c2;
        b[2] = b[1];
        c2 = c;
        b[1] = temp;
      }
      else if(c > c3)
      {
        c3 = c;
        b[2] = temp;
      }
	}
  //for(int i = 0; i < n; i++)
        //printf("Elem: %d\n",a[i]);
}
int main()
{
	int n;
	int a[100];
	int b[3];
	int i=0;

	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}

	mostFreq3(a,n,b);
        for(i=0; i<3; i++)
            printf("%d ", b[i]);

	return 0;
}
