#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.


void calculate_the_maximum(int n, int k) {
  //Write your code here.
  int i,j,m,x,y,z,mx,ma,mxor;
  ma=0;
  mx=0; 
  mxor=0;
  for(i=1;i<n;i++)
  {
      for(j=i+1;j<=n;j++)
      {
          x=i&j;
          y=i|j;
          z=i^j;
          if(x>ma&&x<k){
              ma=x;
          }
          if(y>mx&&y<k){
              mx=y;
          }
          if(z>mxor&&z<k){
              mxor=z;
          }
      }
  }
  printf("%d\n%d\n%d\n",ma,mx,mxor);
}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}
